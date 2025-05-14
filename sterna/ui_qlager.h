/********************************************************************************
** Form generated from reading UI file 'qlager.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLAGER_H
#define UI_QLAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <qmybasewidget.h>

QT_BEGIN_NAMESPACE

class Ui_QLagerClass
{
public:

    void setupUi(QMyBaseWidget *QLagerClass)
    {
        if (QLagerClass->objectName().isEmpty())
            QLagerClass->setObjectName("QLagerClass");
        QLagerClass->setObjectName("QLagerClass");
        QLagerClass->resize(400, 300);

        retranslateUi(QLagerClass);

        QMetaObject::connectSlotsByName(QLagerClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QLagerClass)
    {
        QLagerClass->setWindowTitle(QCoreApplication::translate("QLagerClass", "QLager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QLagerClass: public Ui_QLagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLAGER_H
