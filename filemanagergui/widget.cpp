#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButtonExploreFileMan, &QPushButton::clicked, this, &Widget::getFilename);
    connect(ui->pushButtonExploreFileObs, &QPushButton::clicked, this, &Widget::getFilename);
    connect(ui->pushButtonAddManager, &QPushButton::clicked, this, &Widget::addFileManager);
    connect(ui->pushButtonAddObserver, &QPushButton::clicked, this, &Widget::addFileObserver);
    connect(ui->pushButtonRemoveManager, &QPushButton::clicked, this, &Widget::removeFileManager);
    connect(ui->pushButtonRemoveObserver, &QPushButton::clicked, this, &Widget::removeFileObserver);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connectManagerObserver(Manager *manager, FileObserver *observer)
{
    QObject::connect(manager, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}

void Widget::disconnectManagerObserver(Manager *manager, FileObserver *observer)
{
    QObject::disconnect(manager, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}

void Widget::getFilename()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open file"), QDir::currentPath(), tr("Text file (*.txt)"));

    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if( button->objectName() == ui->pushButtonExploreFileMan->objectName() ) {
        ui->lineEditManager->setText(fileName);
    } else if( button->objectName() == ui->pushButtonExploreFileObs->objectName() ) {
        ui->lineEditObserver->setText(fileName);
    }
}

void Widget::addFileManager()
{
    QString newFile = ui->lineEditManager->text();
    if (newFile.isEmpty())
        return;

    manager.addFile(newFile);
    ui->plainTextEditManager->appendPlainText(QString("Менеджер управляет файлом %1\n").arg(newFile));

    for (int i = 0; i < observers.size(); ++i) {
        if (observers[i]->getFileName() == newFile) {
            connectManagerObserver(&manager, observers[i]);
            break;
        }
    }

    ui->lineEditManager->clear();

}

void Widget::addFileObserver()
{
    QString newFile = ui->lineEditObserver->text();
    FileObserver *observer = new FileObserver(newFile);
    connect(observer, &FileObserver::needInfoAboutFile, this, &Widget::printUpdateInfo);
    observers.push_back(observer);

    ui->plainTextEditObserver->appendPlainText(QString("Добавлен наблюдатель %1\n").arg(newFile));

    if (manager.isHaveFile(newFile))
        connectManagerObserver(&manager, observer);

    ui->lineEditObserver->clear();
}

void Widget::removeFileManager()
{
    QString remFile = ui->lineEditManager->text();
    manager.removeFile(remFile);
    ui->plainTextEditManager->appendPlainText(QString("Mенеджер удалил %1\n").arg(remFile));

    for (int i = 0; i < observers.size(); ++i) {
        if (observers[i]->getFileName() == remFile) {
            disconnectManagerObserver(&manager, observers[i]);
        }
    }

    ui->lineEditManager->clear();
}

void Widget::removeFileObserver()
{
    QString remFile = ui->lineEditObserver->text();

    for (int i = 0; i < observers.size(); ++i) {
        if (observers[i]->getFileName() == remFile) {
            disconnectManagerObserver(&manager, observers[i]);
            observers.removeAt(i);
            ui->plainTextEditObserver->appendPlainText(QString("Удален наблюдатель %1\n").arg(remFile));
            break;
        }
    }

    ui->lineEditObserver->clear();
}

void Widget::printUpdateInfo()
{
    FileObserver* obs = qobject_cast<FileObserver*>(sender());
    ui->plainTextEditObserver->appendPlainText(obs->getInfoAboutFile() + '\n');
}
