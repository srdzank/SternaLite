/********************************************************************************
** Form generated from reading UI file 'qizlezniispratnicilista.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIZLEZNIISPRATNICILISTA_H
#define UI_QIZLEZNIISPRATNICILISTA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QIzlezniIspratniciListaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;

    void setupUi(QMyBaseFormWidget *QIzlezniIspratniciListaClass)
    {
        if (QIzlezniIspratniciListaClass->objectName().isEmpty())
            QIzlezniIspratniciListaClass->setObjectName("QIzlezniIspratniciListaClass");
        QIzlezniIspratniciListaClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QIzlezniIspratniciListaClass->setFont(font);
        layoutWidget = new QWidget(QIzlezniIspratniciListaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 1032, 561));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setFont(font);
        tableView_2->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView_2, 6, 0, 1, 7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/key_f2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/key_f3.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon1);

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 8, 0, 1, 7);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_6->setFont(font1);
        lineEdit_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 7, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 7, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 7, 5, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setFont(font1);
        lineEdit_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 7, 4, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setFont(font1);
        lineEdit_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_9->setReadOnly(true);

        gridLayout->addWidget(lineEdit_9, 7, 6, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(234, 234, 234, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 3, 0, 2, 7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setFont(font);

        gridLayout->addWidget(lineEdit_7, 2, 1, 1, 5);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        gridLayout->addWidget(radioButton, 0, 6, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setChecked(true);

        gridLayout->addWidget(radioButton_2, 2, 6, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setBold(true);
        label->setFont(font2);

        gridLayout->addWidget(label, 5, 0, 1, 7);


        retranslateUi(QIzlezniIspratniciListaClass);

        QMetaObject::connectSlotsByName(QIzlezniIspratniciListaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QIzlezniIspratniciListaClass)
    {
        QIzlezniIspratniciListaClass->setWindowTitle(QCoreApplication::translate("QIzlezniIspratniciListaClass", "QIzlezniIspratniciLista", nullptr));
        pushButton->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\222\320\275\320\265\321\201\320\270 \320\275\320\276\320\262\320\260 \320\270\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\260         ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230 \320\277\320\276\321\201\321\202\320\276\320\265\321\207\320\272\320\260       ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\230\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\270 \320\267\320\260 \320\244\320\260\320\272\321\202\321\203\321\200\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\232\321\200\320\265\320\270\321\200\320\260\321\230 \320\244\320\260\320\272\321\202\321\203\321\200\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\230\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\270</span><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\"> - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\222\320\272\321\203\320\277\320\265\320\275 \320\230\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222 ", nullptr));
        label_9->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\237\320\273\320\260\321\202\320\265\320\275 \320\230\320\267\320\275\320\276\321\201", nullptr));
        label_10->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\236\321\201\321\202\320\260\320\275\320\260\321\202\320\276 \320\267\320\260 \320\277\320\273\320\260\320\272\320\260\321\232\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\237\321\200\320\265\320\261\320\260\321\200\321\203\320\262\320\260\321\232\320\265 \320\277\320\276 \320\272\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
        radioButton->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\237\320\265\321\207\320\260\321\202\320\270 \320\273\320\270\321\201\321\202\320\260 \320\275\320\260 \320\270\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\270", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QIzlezniIspratniciListaClass", "\320\237\320\265\321\207\320\260\321\202\320\270 \321\201\320\265\320\273\320\265\320\272\321\202\320\270\321\200\320\260\320\275\320\260 \320\270\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\260", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QIzlezniIspratniciListaClass: public Ui_QIzlezniIspratniciListaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIZLEZNIISPRATNICILISTA_H
