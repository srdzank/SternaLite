/********************************************************************************
** Form generated from reading UI file 'qizleznipopismasterkorekcija.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIZLEZNIPOPISMASTERKOREKCIJA_H
#define UI_QIZLEZNIPOPISMASTERKOREKCIJA_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QIzleznipopismasterKorekcijaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_6;
    QTableView *tableView;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *lineEdit_8;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QPushButton *pushButtonA;
    QLineEdit *lineEdit;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_6;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QLabel *label_14;
    QLineEdit *lineEdit_10;
    QLabel *label_15;
    QLineEdit *lineEdit_11;

    void setupUi(QMyBaseFormWidget *QIzleznipopismasterKorekcijaClass)
    {
        if (QIzleznipopismasterKorekcijaClass->objectName().isEmpty())
            QIzleznipopismasterKorekcijaClass->setObjectName("QIzleznipopismasterKorekcijaClass");
        QIzleznipopismasterKorekcijaClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QIzleznipopismasterKorekcijaClass->setFont(font);
        layoutWidget = new QWidget(QIzleznipopismasterKorekcijaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 851, 571));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 6, 4, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);

        gridLayout->addWidget(pushButton_4, 1, 4, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 4, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setFont(font);

        gridLayout->addWidget(lineEdit_7, 7, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 7, 4, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 9, 0, 1, 5);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setFont(font);
        dateTimeEdit->setDate(QDate(2000, 3, 1));
        dateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout->addWidget(lineEdit_8, 8, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setFont(font);

        gridLayout->addWidget(lineEdit_5, 1, 1, 1, 1);

        pushButtonA = new QPushButton(layoutWidget);
        pushButtonA->setObjectName("pushButtonA");

        gridLayout->addWidget(pushButtonA, 8, 4, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 2, 1, 1, 3);

        dateTimeEdit_2 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setFont(font);
        dateTimeEdit_2->setDate(QDate(2000, 3, 1));
        dateTimeEdit_2->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_2, 3, 3, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 3, 2, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 5, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 4, 2, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);

        gridLayout->addWidget(lineEdit_6, 4, 3, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 5, 3, 4, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 6, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_9, 0, 1, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 0, 2, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_10, 0, 3, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 0, 4, 1, 1);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_11, 0, 5, 1, 1);


        gridLayout->addLayout(gridLayout_2, 10, 0, 1, 5);


        retranslateUi(QIzleznipopismasterKorekcijaClass);

        QMetaObject::connectSlotsByName(QIzleznipopismasterKorekcijaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QIzleznipopismasterKorekcijaClass)
    {
        QIzleznipopismasterKorekcijaClass->setWindowTitle(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "QIzleznipopismasterKorekcija", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_2->setToolTip(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
        label_4->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\320\276\320\277\320\270\321\201 - \320\232\320\276\321\200\320\265\320\272\321\206\320\270\321\230\320\260</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\237\320\276\320\277\320\270\321\201 \320\230\320\264.", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", " \320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230", nullptr));
        label->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\224\320\260\321\202\321\203\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_9->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\240\320\260\320\261\320\260\321\202", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "d/M/yyyy", nullptr));
        label_10->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\240\320\276\320\272 \320\267\320\260 \320\277\320\273\320\260\320\272\320\260\321\232\320\265(\320\264\320\265\320\275\320\276\320\262\320\270)", nullptr));
        pushButtonA->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "d/M/yyyy", nullptr));
        label_12->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\222\320\260\320\273\321\203\321\202\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\227\320\260\320\261\320\265\320\273\320\265\321\210\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\227\320\260\320\273\320\270\321\205\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\246\320\265\320\275\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_6->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\232\320\276\320\273\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\222\320\272\321\203\320\277\320\265\320\275 \320\270\320\267\320\275\320\276\321\201 \320\261\320\265\320\267 \320\224\320\224\320\222", nullptr));
        label_14->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\224\320\224\320\222 \320\230\320\267\320\275\320\276\321\201", nullptr));
        label_15->setText(QCoreApplication::translate("QIzleznipopismasterKorekcijaClass", "\320\222\320\272\321\203\320\277\320\265\320\275 \320\230\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QIzleznipopismasterKorekcijaClass: public Ui_QIzleznipopismasterKorekcijaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIZLEZNIPOPISMASTERKOREKCIJA_H
