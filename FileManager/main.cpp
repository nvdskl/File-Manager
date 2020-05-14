#include <QCoreApplication>
#include "manager.h"
#include "fileobserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Manager manager;
    manager.addFile("file1.txt");
    manager.addFile("file2.txt");

    FileObserver obs1("file1.txt");
    FileObserver obs2("file2.txt");

    obs1.aboutFile();
    obs2.aboutFile();

    manager.addObserver(&obs1);
    manager.addObserver(&obs2);

    return a.exec();
}
