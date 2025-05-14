/********************************************************************************
** Form generated from reading UI file 'qpromenaceniwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROMENACENIWIDGET_H
#define UI_QPROMENACENIWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPromenaCeniWidgetClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QMyBaseFormWidget *QPromenaCeniWidgetClass)
    {
        if (QPromenaCeniWidgetClass->objectName().isEmpty())
            QPromenaCeniWidgetClass->setObjectName("QPromenaCeniWidgetClass");
        QPromenaCeniWidgetClass->resize(2400, 2400);
        layoutWidget = new QWidget(QPromenaCeniWidgetClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 791, 581));
        QFont font;
        font.setPointSize(10);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(228, 228, 228, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(QPromenaCeniWidgetClass);

        QMetaObject::connectSlotsByName(QPromenaCeniWidgetClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QPromenaCeniWidgetClass)
    {
        QPromenaCeniWidgetClass->setWindowTitle(QCoreApplication::translate("QPromenaCeniWidgetClass", "QPromenaCeniWidget", nullptr));
        label_4->setText(QCoreApplication::translate("QPromenaCeniWidgetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230 \320\267\320\260 \320\277\321\200\320\276\320\274\320\265\320\275\320\260 \320\275\320\260 \321\206\320\265\320\275\320\270</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QPromenaCeniWidgetClass", "Copy to Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPromenaCeniWidgetClass: public Ui_QPromenaCeniWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROMENACENIWIDGET_H
