#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString path = qApp->applicationDirPath();
    qInfo() <<"path:"<<path;
    QTranslator tsor;
    tsor.load(QLocale(),"test", "_",path);
    a.installTranslator(&tsor);

    QDialog w;
    QLabel label(&w);
    if(argc == 2)
        label.setText(argv[1]);
    else
        label.setText(QObject::tr("Helle World!"));
    w.show();
    return a.exec();
}
