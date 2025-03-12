/********************************************************************************
** Form generated from reading UI file 'qbankivnes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QBANKIVNES_H
#define UI_QBANKIVNES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QBankiVnesClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QBankiVnesClass)
    {
        if (QBankiVnesClass->objectName().isEmpty())
            QBankiVnesClass->setObjectName("QBankiVnesClass");
        QBankiVnesClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QBankiVnesClass->setFont(font);
        layoutWidget = new QWidget(QBankiVnesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 691, 85));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 0, 0, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, pushButton);

        retranslateUi(QBankiVnesClass);

        QMetaObject::connectSlotsByName(QBankiVnesClass);
    } // setupUi

    void retranslateUi(QWidget *QBankiVnesClass)
    {
        QBankiVnesClass->setWindowTitle(QCoreApplication::translate("QBankiVnesClass", "QBankiVnes", nullptr));
        label_16->setText(QCoreApplication::translate("QBankiVnesClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\221\320\260\320\275\320\272\320\270 - \320\222\320\275\320\265\321\201 </span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QBankiVnesClass", "\320\235\320\260\320\267\320\270\320\262 ", nullptr));
        pushButton->setText(QCoreApplication::translate("QBankiVnesClass", "\320\222\320\275\320\265\321\201\320\270      ", nullptr));
        label_2->setText(QCoreApplication::translate("QBankiVnesClass", "\320\226\320\270\321\200\320\276 \321\201\320\274\320\265\321\202\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QBankiVnesClass: public Ui_QBankiVnesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QBANKIVNES_H
