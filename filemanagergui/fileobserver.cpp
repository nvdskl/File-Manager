#include "fileobserver.h"
#include <QFile>
#include <QFileInfo>
#include <QTextStream>

using namespace std;

FileObserver::FileObserver(QObject *parent) : QObject(parent)
{

}

FileObserver::FileObserver(const QString &filename)
{
    this->filename = filename;
    QFileInfo info(filename);
    exist = info.exists();
    size = info.size();
}

void FileObserver::setFile(const QString &filename)
{
    this->filename = filename;
}

void FileObserver::aboutFile()
{
    QTextStream out(stdout);
    if (exist) {
        QString info = QString("Filename: %1, Size: %2, is_exist: true").
                arg(filename).arg(size);
        out << info << "\n";
    } else {
        out << "File " << filename << " doesn't exist";
    }

    out.flush();
}

QString FileObserver::getInfoAboutFile()
{
    QString info;
    if (exist) {
        info = QString("Filename: %1, Size: %2, is_exist: true").
                arg(filename).arg(size);
    } else {
        info = QString("File %1 doesn't exist").arg(filename);
    }

    return info;
}

void FileObserver::updateInfo(QString filename, qint64 size, bool exist)
{
    if (this->filename == filename) {
        this->filename = filename;
        this->size = size;
        this->exist = exist;

        aboutFile();

        emit needInfoAboutFile();
    }
}
