/********************************************************************************
** Form generated from reading UI file 'quserform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUSERFORM_H
#define UI_QUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QUserForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *QUserForm)
    {
        if (QUserForm->objectName().isEmpty())
            QUserForm->setObjectName("QUserForm");
        QUserForm->resize(483, 94);
        QFont font;
        font.setPointSize(10);
        QUserForm->setFont(font);
        layoutWidget = new QWidget(QUserForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 381, 66));
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

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);


        retranslateUi(QUserForm);
        QObject::connect(pushButton, &QPushButton::clicked, QUserForm, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(QUserForm);
    } // setupUi

    void retranslateUi(QDialog *QUserForm)
    {
        QUserForm->setWindowTitle(QCoreApplication::translate("QUserForm", "Login", nullptr));
        label->setText(QCoreApplication::translate("QUserForm", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("QUserForm", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("QUserForm", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QUserForm: public Ui_QUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUSERFORM_H
