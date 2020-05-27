#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "manager.h"
#include "fileobserver.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void connectManagerObserver(Manager *manager, FileObserver *observer);
    void disconnectManagerObserver(Manager *manager, FileObserver *observer);

public slots:
    void getFilename();
    void addFileManager();
    void addFileObserver();
    void removeFileManager();
    void removeFileObserver();
    void printUpdateInfo();

private:
    Ui::Widget *ui;
    Manager manager;
    QList<FileObserver*> observers;
};

#endif // WIDGET_H
