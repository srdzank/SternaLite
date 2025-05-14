/********************************************************************************
** Form generated from reading UI file 'qporackismetkikorekcija.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPORACKISMETKIKOREKCIJA_H
#define UI_QPORACKISMETKIKOREKCIJA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPorackiSmetkiKorekcijaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_10;
    QLabel *label_5;
    QTableView *tableView;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_8;
    QLabel *label_11;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_9;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QLabel *label_13;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_12;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_14;

    void setupUi(QMyBaseFormWidget *QPorackiSmetkiKorekcijaClass)
    {
        if (QPorackiSmetkiKorekcijaClass->objectName().isEmpty())
            QPorackiSmetkiKorekcijaClass->setObjectName("QPorackiSmetkiKorekcijaClass");
        QPorackiSmetkiKorekcijaClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QPorackiSmetkiKorekcijaClass->setFont(font);
        layoutWidget = new QWidget(QPorackiSmetkiKorekcijaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 1106, 551));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);

        gridLayout->addWidget(pushButton_4, 1, 10, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setEnabled(true);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_10->setFont(font1);
        lineEdit_10->setReadOnly(false);

        gridLayout->addWidget(lineEdit_10, 9, 6, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 8, 0, 1, 11);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 9, 10, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setFont(font);

        gridLayout->addWidget(tableView_2, 10, 0, 1, 11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setEnabled(true);
        lineEdit_9->setFont(font1);
        lineEdit_9->setReadOnly(false);

        gridLayout->addWidget(lineEdit_9, 9, 1, 1, 4);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 9, 5, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 11, 10, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 9, 9, 1, 1);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setEnabled(true);
        lineEdit_11->setFont(font1);
        lineEdit_11->setReadOnly(false);

        gridLayout->addWidget(lineEdit_11, 1, 1, 1, 5);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);
        lineEdit_3->setReadOnly(false);

        gridLayout->addWidget(lineEdit_3, 4, 1, 1, 4);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(false);
        lineEdit_8->setFont(font1);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 2, 9, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 13, 9, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 12, 9, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font);
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_5, 12, 10, 1, 1);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setFont(font);
        lineEdit_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_12, 13, 10, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 3, 7, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 2, 7, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 4);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(true);
        lineEdit_7->setFont(font1);
        lineEdit_7->setReadOnly(false);

        gridLayout->addWidget(lineEdit_7, 2, 1, 1, 6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 10, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(false);
        lineEdit_6->setFont(font1);
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 3, 9, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 6);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 5, 9, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 5, 10, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 11, 9, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 11, 1, 3, 6);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 11, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_11, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, pushButton_8);
        QWidget::setTabOrder(pushButton_8, tableView);
        QWidget::setTabOrder(tableView, tableView_2);
        QWidget::setTabOrder(tableView_2, lineEdit);

        retranslateUi(QPorackiSmetkiKorekcijaClass);

        QMetaObject::connectSlotsByName(QPorackiSmetkiKorekcijaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QPorackiSmetkiKorekcijaClass)
    {
        QPorackiSmetkiKorekcijaClass->setWindowTitle(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "QPorackiSmetkiKorekcija", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", " \320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230 \320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_10->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\237\321\200\320\276\320\264. \320\246\320\265\320\275\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_4->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\320\276\321\200\320\260\321\207\320\272\320\260 - \320\241\320\274\320\265\321\202\320\272\320\260 - \320\232\320\276\321\200\320\265\320\272\321\206\320\270\321\230\320\260</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        label_11->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\236\320\277\320\270\321\201 \320\275\320\260 \320\277\320\273\320\260\320\272\320\260\321\232\320\265", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_9->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\230\320\267\320\275\320\276\321\201 \320\275\320\260 \320\277\320\273\320\260\320\272\320\260\321\232\320\265", nullptr));
        label_13->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\221\321\200. \320\275\320\260 \320\237\320\276\321\200\320\260\321\207\320\272\320\260-\320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        pushButton_7->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_11->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_8->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\236\321\201\321\202\320\260\320\275\320\260\321\202\320\276 \320\267\320\260 \320\277\320\273\320\260\320\272\320\260\320\275\321\230\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\222\320\272. \320\277\320\273\320\260\321\202\320\265\320\275 \320\270\320\267\320\275\320\276\321\201", nullptr));
        label_8->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\250\320\270\321\204\321\200\320\260 \320\275\320\260 \320\260\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_10->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\250\320\270\321\204\321\200\320\260 \320\275\320\260 \320\272\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_7->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_6->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_2->setToolTip(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "<html><head/><body><p>\320\237\321\200\320\270\321\202\320\270\321\201\320\275\320\270 \320\225\320\235\320\242\320\225\320\240 \320\267\320\260 \320\264\320\260 \321\202\320\265 \320\276\320\264\320\275\320\265\321\201\320\265 \320\262\320\276 \320\273\320\270\321\201\321\202\320\260\321\202\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\232\320\276\320\273\320\270\321\207\320\270\320\275\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        label->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\222\320\272. \320\270\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_14->setText(QCoreApplication::translate("QPorackiSmetkiKorekcijaClass", "\320\227\320\260\320\261\320\265\320\273\320\265\321\210\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPorackiSmetkiKorekcijaClass: public Ui_QPorackiSmetkiKorekcijaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPORACKISMETKIKOREKCIJA_H
