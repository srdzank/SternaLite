/********************************************************************************
** Form generated from reading UI file 'qizleznismetkikorekcija.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIZLEZNISMETKIKOREKCIJA_H
#define UI_QIZLEZNISMETKIKOREKCIJA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QIzlezniSmetkiKorekcijaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;

    void setupUi(QMyBaseFormWidget *QIzlezniSmetkiKorekcijaClass)
    {
        if (QIzlezniSmetkiKorekcijaClass->objectName().isEmpty())
            QIzlezniSmetkiKorekcijaClass->setObjectName("QIzlezniSmetkiKorekcijaClass");
        QIzlezniSmetkiKorekcijaClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QIzlezniSmetkiKorekcijaClass->setFont(font);
        layoutWidget = new QWidget(QIzlezniSmetkiKorekcijaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 851, 571));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 7, 0, 1, 6);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);

        gridLayout->addWidget(pushButton_4, 0, 5, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(true);
        lineEdit_5->setFont(font);
        lineEdit_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_5, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 8, 2, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 8, 4, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 2, 3, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(true);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_7->setFont(font1);
        lineEdit_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_7, 2, 4, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 5, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 4, 3, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 4, 4, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 3, 5, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 4, 5, 1, 1);


        retranslateUi(QIzlezniSmetkiKorekcijaClass);

        QMetaObject::connectSlotsByName(QIzlezniSmetkiKorekcijaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QIzlezniSmetkiKorekcijaClass)
    {
        QIzlezniSmetkiKorekcijaClass->setWindowTitle(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "QIzlezniSmetkiKorekcija", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", " \320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230 \320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\241\320\274\320\265\321\202\320\272\320\260 \320\230\320\264.", nullptr));
        label_4->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\241\320\274\320\265\321\202\320\272\320\260 - \320\232\320\276\321\200\320\265\320\272\321\206\320\270\321\230\320\260</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\222\320\272. \320\270\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_2->setToolTip(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_9->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\250\320\270\321\204\321\200\320\260", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_7->setToolTip(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "Cancel", nullptr));
        label_5->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\246\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\232\320\276\320\273\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\241\320\260\320\273\320\264\320\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QIzlezniSmetkiKorekcijaClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QIzlezniSmetkiKorekcijaClass: public Ui_QIzlezniSmetkiKorekcijaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIZLEZNISMETKIKOREKCIJA_H
