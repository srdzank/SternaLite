/********************************************************************************
** Form generated from reading UI file 'qPriemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRIEMWIDGET_H
#define UI_QPRIEMWIDGET_H

#include <QtCore/QVariant>
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

class Ui_QPriemWidgetClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QMyBaseFormWidget *QPriemWidgetClass)
    {
        if (QPriemWidgetClass->objectName().isEmpty())
            QPriemWidgetClass->setObjectName("QPriemWidgetClass");
        QPriemWidgetClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QPriemWidgetClass->setFont(font);
        layoutWidget = new QWidget(QPriemWidgetClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 21, 791, 581));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(228, 228, 228, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, tableView);

        retranslateUi(QPriemWidgetClass);

        QMetaObject::connectSlotsByName(QPriemWidgetClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QPriemWidgetClass)
    {
        QPriemWidgetClass->setWindowTitle(QCoreApplication::translate("QPriemWidgetClass", "QPriemWidget", nullptr));
        label_4->setText(QCoreApplication::translate("QPriemWidgetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\233\320\260\320\263\320\265\321\200 - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QPriemWidgetClass", "\320\237\321\200\320\265\320\261\320\260\321\200\321\203\320\262\320\260\321\232\320\265 \320\277\320\276 \320\275\320\260\320\267\320\270\320\262 \320\275\320\260 \320\260\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("QPriemWidgetClass", "Copy To Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPriemWidgetClass: public Ui_QPriemWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRIEMWIDGET_H
