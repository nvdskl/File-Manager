#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QDateTime>
#include <QTimer>

class FileObserver;

struct FileInfo
{
    QString fileName;
    long long lastModified;
};

class Manager : public QObject
{
    Q_OBJECT
public:
    explicit Manager(QObject *parent = nullptr);
    void addObserver(FileObserver *observer);
    void removeObserver(FileObserver *observer);
    void addFile(const QString &filename);

signals:
    void fileChangeState(QString filename, qint64 size, bool exist);

public slots:
    void checkFiles();

private:
    QList<FileInfo> storage;
    QTimer *timer;
};

#endif // MANAGER_H
