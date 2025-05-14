/********************************************************************************
** Form generated from reading UI file 'qfiscalform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFISCALFORM_H
#define UI_QFISCALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFiscalForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;

    void setupUi(QDialog *QFiscalForm)
    {
        if (QFiscalForm->objectName().isEmpty())
            QFiscalForm->setObjectName("QFiscalForm");
        QFiscalForm->resize(429, 143);
        QFont font;
        font.setPointSize(12);
        QFiscalForm->setFont(font);
        layoutWidget = new QWidget(QFiscalForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 331, 106));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_2, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_3);

        retranslateUi(QFiscalForm);

        QMetaObject::connectSlotsByName(QFiscalForm);
    } // setupUi

    void retranslateUi(QDialog *QFiscalForm)
    {
        QFiscalForm->setWindowTitle(QCoreApplication::translate("QFiscalForm", "\320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("QFiscalForm", "\320\230\320\227\320\235\320\236\320\241 \320\227\320\220  \320\235\320\220\320\237\320\233\320\220\320\242\320\220", nullptr));
        label_2->setText(QCoreApplication::translate("QFiscalForm", "\320\237\320\233\320\220\320\242\320\225\320\235\320\236", nullptr));
        label_3->setText(QCoreApplication::translate("QFiscalForm", "\320\230\320\227\320\235\320\236\320\241 \320\227\320\220 \320\222\320\240\320\220\320\232\320\220\320\212\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFiscalForm: public Ui_QFiscalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFISCALFORM_H
