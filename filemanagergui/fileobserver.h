#ifndef FILEOBSERVER_H
#define FILEOBSERVER_H

#include <QObject>

class QFile;

class FileObserver : public QObject
{
    Q_OBJECT
public:
    explicit FileObserver(QObject *parent = nullptr);
    FileObserver(const QString &filename);
    void setFile(const QString &filename);
    QString getFileName() const { return filename; }
    void aboutFile();
    QString getInfoAboutFile();

signals:
    void needInfoAboutFile();

public slots:
    void updateInfo(QString filename, qint64 size, bool exist);

private:
    QString filename;
    qint64 size;
    bool exist;
};

#endif // FILEOBSERVER_H
