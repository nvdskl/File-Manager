#include <QCoreApplication>
#include <QObject>
#include "manager.h"
#include "fileobserver.h"

void connectManagerObserver(Manager *manager, FileObserver *observer)
{
    QObject::connect(manager, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}


void disconnectManagerObserver(Manager *manager, FileObserver *observer)
{
    QObject::disconnect(manager, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Manager manager;
    manager.getLink();
    
    manager.addFile("file1.txt");
    FileObserver obs1("file1.txt");
    connectManagerObserver(&manager, &obs1);

    manager.addFile("file2.txt");
    FileObserver obs2("file2.txt");
    connectManagerObserver(&manager, &obs2);

    obs1.aboutFile();
    obs2.aboutFile();

    disconnectManagerObserver(&manager, &obs1);
    disconnectManagerObserver(&manager, &obs2);

    return a.exec();
}
