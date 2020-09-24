#if 0
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
    w.resize(400,300);
    QLabel label(&w);
    label.move(120,120);
    if(argc == 2)
        label.setText(argv[1]);
    else
        label.setText(QObject::tr("Helle World!"));
    w.show();
    return a.exec();
}
#else
#include "ui_hellodialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    QDialog w;
    Ui::HelloDialog ui;
    ui.setupUi(&w);
    w.show();
    return a.exec();
}
#endif
