#include "manager.h"
#include "fileobserver.h"
#include <QFileInfo>
#include <QDebug>

Manager::Manager(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, &Manager::checkFiles);
    timer->start(20000);
}

void Manager::addFile(const QString &filename)
{
    QFileInfo info(filename);
    storage.push_back(FileInfo { filename, info.lastModified().toMSecsSinceEpoch() });
}

void Manager::removeFile(const QString &filename)
{
    for (int i = 0; i < storage.size(); ++i) {
        if (storage.at(i).fileName == filename) {
            storage.removeAt(i);
            break;
        }
    }
}

bool Manager::isHaveFile(const QString &filename)
{
    for (int i = 0; i < storage.size(); ++i) {
        if (storage.at(i).fileName == filename)
            return true;
    }

    return false;
}

void Manager::checkFiles()
{
    qDebug() << "Check FILES";
    for(FileInfo &var : storage) {
        QFileInfo file(var.fileName);
        if (file.exists()) {
            if (var.lastModified != file.lastModified().toMSecsSinceEpoch()) {
                var.lastModified = file.lastModified().toMSecsSinceEpoch();
                emit fileChangeState(file.absoluteFilePath(), file.size(), file.exists());
            }
        } else {
            emit fileChangeState(var.fileName, 0, false);
        }
    }
}
