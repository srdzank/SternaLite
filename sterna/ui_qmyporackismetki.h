/********************************************************************************
** Form generated from reading UI file 'qmyporackismetki.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYPORACKISMETKI_H
#define UI_QMYPORACKISMETKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyPorackiSmetkiClass
{
public:

    void setupUi(QMyBaseWidget *QMyPorackiSmetkiClass)
    {
        if (QMyPorackiSmetkiClass->objectName().isEmpty())
            QMyPorackiSmetkiClass->setObjectName("QMyPorackiSmetkiClass");
        QMyPorackiSmetkiClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMyPorackiSmetkiClass->setFont(font);

        retranslateUi(QMyPorackiSmetkiClass);

        QMetaObject::connectSlotsByName(QMyPorackiSmetkiClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyPorackiSmetkiClass)
    {
        QMyPorackiSmetkiClass->setWindowTitle(QCoreApplication::translate("QMyPorackiSmetkiClass", "QMySmetki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyPorackiSmetkiClass: public Ui_QMyPorackiSmetkiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYPORACKISMETKI_H
