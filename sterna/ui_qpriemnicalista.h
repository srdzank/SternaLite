/********************************************************************************
** Form generated from reading UI file 'qpriemnicalista.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRIEMNICALISTA_H
#define UI_QPRIEMNICALISTA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPriemnicaListaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QTableView *tableView_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMyBaseFormWidget *QPriemnicaListaClass)
    {
        if (QPriemnicaListaClass->objectName().isEmpty())
            QPriemnicaListaClass->setObjectName("QPriemnicaListaClass");
        QPriemnicaListaClass->resize(2400, 2400);
        layoutWidget = new QWidget(QPriemnicaListaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 921, 571));
        QFont font;
        font.setPointSize(10);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
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

        gridLayout->addWidget(tableView, 1, 0, 4, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        tableView_2->setPalette(palette1);
        tableView_2->setFont(font);
        tableView_2->setFrameShadow(QFrame::Plain);
        tableView_2->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView_2, 5, 0, 1, 4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/sterna/Resources/key_f3.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon1);

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 6, 0, 1, 3);


        retranslateUi(QPriemnicaListaClass);

        QMetaObject::connectSlotsByName(QPriemnicaListaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QPriemnicaListaClass)
    {
        QPriemnicaListaClass->setWindowTitle(QCoreApplication::translate("QPriemnicaListaClass", "QPriemnicaLista", nullptr));
        label_4->setText(QCoreApplication::translate("QPriemnicaListaClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\270 - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QPriemnicaListaClass", "\320\222\320\275\320\265\321\201\320\270 \320\275\320\276\320\262\320\260 \320\277\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QPriemnicaListaClass", "\320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230 \320\277\320\276\321\201\321\202\320\276\320\265\321\207\320\272\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QPriemnicaListaClass", "\320\230\320\267\320\261\321\200\320\270\321\210\320\270\321\230\320\260 \321\230\320\260 \320\277\320\276\321\201\321\202\320\276\320\265\321\207\320\272\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPriemnicaListaClass: public Ui_QPriemnicaListaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRIEMNICALISTA_H
