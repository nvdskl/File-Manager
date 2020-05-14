#include "manager.h"
#include "fileobserver.h"
#include <QFileInfo>
#include <QDebug>
#include <QList>

Manager::Manager(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, &Manager::checkFiles);
    timer->start(10000);
}

void Manager::addObserver(FileObserver *observer)
{
    connect(this, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}

void Manager::removeObserver(FileObserver *observer)
{
    disconnect(this, &Manager::fileChangeState, observer, &FileObserver::updateInfo);
}

void Manager::addFile(const QString &filename)
{
    QFileInfo info(filename);
    storage.push_back(FileInfo { filename, info.lastModified().toMSecsSinceEpoch() });
}

void Manager::checkFiles()
{
    QTextStream out(stdout);
    out << "Check FILES" << "\n";
    for(FileInfo &var : storage)
    {
        QFileInfo file(var.fileName);
        if (file.exists())//if (file.exists() || file.isSymLink())
        {
            out << "No changes" << "\n";
            if (var.lastModified != file.lastModified().toMSecsSinceEpoch())
            {
                var.lastModified = file.lastModified().toMSecsSinceEpoch();
                emit fileChangeState(file.fileName(), file.size(), file.exists());
            }
        }
        else
        {
            emit fileChangeState(var.fileName, 0, false);
        }
    }

    out.flush();
}

