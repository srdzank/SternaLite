/********************************************************************************
** Form generated from reading UI file 'qpromenaceni.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROMENACENI_H
#define UI_QPROMENACENI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPromenaCeniClass
{
public:

    void setupUi(QMyBaseWidget *QPromenaCeniClass)
    {
        if (QPromenaCeniClass->objectName().isEmpty())
            QPromenaCeniClass->setObjectName("QPromenaCeniClass");
        QPromenaCeniClass->resize(400, 300);
        QFont font;
        font.setPointSize(10);
        QPromenaCeniClass->setFont(font);

        retranslateUi(QPromenaCeniClass);

        QMetaObject::connectSlotsByName(QPromenaCeniClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QPromenaCeniClass)
    {
        QPromenaCeniClass->setWindowTitle(QCoreApplication::translate("QPromenaCeniClass", "QPromenaCeni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPromenaCeniClass: public Ui_QPromenaCeniClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROMENACENI_H
