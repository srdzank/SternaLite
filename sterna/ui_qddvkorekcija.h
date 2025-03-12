/********************************************************************************
** Form generated from reading UI file 'qddvkorekcija.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDDVKOREKCIJA_H
#define UI_QDDVKOREKCIJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDdvKorekcijaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *QDdvKorekcijaClass)
    {
        if (QDdvKorekcijaClass->objectName().isEmpty())
            QDdvKorekcijaClass->setObjectName("QDdvKorekcijaClass");
        QDdvKorekcijaClass->resize(901, 804);
        QFont font;
        font.setPointSize(10);
        QDdvKorekcijaClass->setFont(font);
        layoutWidget = new QWidget(QDdvKorekcijaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 471, 97));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 0, 0, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, pushButton);

        retranslateUi(QDdvKorekcijaClass);

        QMetaObject::connectSlotsByName(QDdvKorekcijaClass);
    } // setupUi

    void retranslateUi(QWidget *QDdvKorekcijaClass)
    {
        QDdvKorekcijaClass->setWindowTitle(QCoreApplication::translate("QDdvKorekcijaClass", "QDdvKorekcija", nullptr));
        label_16->setText(QCoreApplication::translate("QDdvKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\224\320\224\320\222 - \320\232\320\276\321\200\320\265\320\272\321\206\320\270\321\230\320\260 </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("QDdvKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\224\320\224\320\222 - \320\235\320\260\320\267\320\270\320\262</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QDdvKorekcijaClass", "\320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230", nullptr));
        label_3->setText(QCoreApplication::translate("QDdvKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\224\320\224\320\222 - \320\230\320\267\320\275\320\276\321\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDdvKorekcijaClass: public Ui_QDdvKorekcijaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDDVKOREKCIJA_H
