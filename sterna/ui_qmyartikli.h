/********************************************************************************
** Form generated from reading UI file 'qmyartikli.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYARTIKLI_H
#define UI_QMYARTIKLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyArtikliClass
{
public:

    void setupUi(QMyBaseWidget *QMyArtikliClass)
    {
        if (QMyArtikliClass->objectName().isEmpty())
            QMyArtikliClass->setObjectName("QMyArtikliClass");
        QMyArtikliClass->resize(400, 300);
        QMyArtikliClass->setAutoFillBackground(true);

        retranslateUi(QMyArtikliClass);

        QMetaObject::connectSlotsByName(QMyArtikliClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyArtikliClass)
    {
        QMyArtikliClass->setWindowTitle(QCoreApplication::translate("QMyArtikliClass", "QMyArtikli", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyArtikliClass: public Ui_QMyArtikliClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYARTIKLI_H
