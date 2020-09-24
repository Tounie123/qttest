#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>

QT_BEGIN_NAMESPACE
class Ui_HelloDialog
{
public:
    QLabel * label;
    void setupUi(QDialog * HelloDialog)
    {
        if(HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QString::fromUtf8("HelleDialog"));
        HelloDialog->resize(400,300);
        label = new QLabel(HelloDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120,120,200,16));

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    }//setupUi

    void retranslateUi(QDialog * HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog","Dialog",nullptr));
        label->setText(QApplication::translate("HelloDialog","HelloWorld! \344\275\240\345\245\275Qt\357\274\201",nullptr));
    }//retranslateUi
};

namespace Ui {
class HelloDialog: public Ui_HelloDialog{};
}
QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
