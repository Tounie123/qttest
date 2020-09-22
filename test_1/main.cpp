#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog w;
    QLabel label(&w);
    if(argc == 2)
        label.setText(argv[1]);
    else
        label.setText("Helle World!");
    w.show();
    return a.exec();
}
