/********************************************************************************
** Form generated from reading UI file 'qizvodvnes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIZVODVNES_H
#define UI_QIZVODVNES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QIzvodVnesClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QTableView *tableView;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label_12;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *QIzvodVnesClass)
    {
        if (QIzvodVnesClass->objectName().isEmpty())
            QIzvodVnesClass->setObjectName("QIzvodVnesClass");
        QIzvodVnesClass->resize(2417, 2400);
        QFont font;
        font.setPointSize(10);
        QIzvodVnesClass->setFont(font);
        layoutWidget = new QWidget(QIzvodVnesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 1011, 651));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 8, 0, 1, 8);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 4, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(false);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setFont(font);
        dateTimeEdit->setDate(QDate(2000, 3, 1));
        dateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);

        gridLayout->addWidget(pushButton_4, 0, 7, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 1, 7, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 4, 7, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 4, 5, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 4, 4, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(false);

        gridLayout->addWidget(pushButton, 9, 6, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(false);

        gridLayout->addWidget(pushButton_2, 9, 7, 1, 1);

        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setFont(font);

        gridLayout->addWidget(tableView_2, 10, 0, 1, 8);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 9, 0, 1, 6);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 4, 6, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 2, 4, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 2, 5, 1, 1);


        retranslateUi(QIzvodVnesClass);

        QMetaObject::connectSlotsByName(QIzvodVnesClass);
    } // setupUi

    void retranslateUi(QWidget *QIzvodVnesClass)
    {
        QIzvodVnesClass->setWindowTitle(QCoreApplication::translate("QIzvodVnesClass", "QIzvodVnes", nullptr));
        label_4->setText(QCoreApplication::translate("QIzvodVnesClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\230\320\267\320\262\320\276\320\264 - \320\222\320\275\320\265\321\201</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\236\320\264\320\261\320\265\321\200\320\270 \320\221\320\260\320\275\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
        label_9->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\237\321\200\320\270\320\273\320\270\320\262", nullptr));
        label_10->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\221\321\200\320\276\321\230 \320\275\320\260 \320\230\320\267\320\262\320\276\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\224\320\260\321\202\321\203\320\274", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QIzvodVnesClass", "d/M/yyyy", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\222\320\275\320\265\321\201\320\270 \320\230\320\267\320\262\320\276\320\264", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QIzvodVnesClass", "Cancel", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        label_11->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\236\320\264\320\273\320\270\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\230\320\267\320\273\320\265\320\267\320\275\320\270 \320\244\320\260\320\272\321\202.", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\222\320\273\320\265\320\267\320\275\320\270 \320\244\320\260\320\272\321\202.", nullptr));
        label_3->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\233\320\270\321\201\321\202\320\260 \320\275\320\260 \320\262\320\273\320\265\320\267\320\275\320\276 \320\270\320\267\320\273\320\265\320\267\320\275\320\270 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\270 \320\267\320\260 \320\272\320\276\320\270 \321\201\320\265 \320\276\320\264\320\275\320\265\321\201\321\203\320\262\320\260 \320\277\320\273\320\260\320\272\320\260\321\232\320\265\321\202\320\276.", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QIzvodVnesClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
        label_12->setText(QCoreApplication::translate("QIzvodVnesClass", " \320\230\320\267\320\262\320\276\320\264- \320\240\320\265\321\204\320\265\321\200\320\265\320\275\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QIzvodVnesClass: public Ui_QIzvodVnesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIZVODVNES_H
