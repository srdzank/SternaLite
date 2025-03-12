/********************************************************************************
** Form generated from reading UI file 'qsearchform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSEARCHFORM_H
#define UI_QSEARCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QSearchForm
{
public:
    QLineEdit *lineEdit;

    void setupUi(QDialog *QSearchForm)
    {
        if (QSearchForm->objectName().isEmpty())
            QSearchForm->setObjectName("QSearchForm");
        QSearchForm->resize(371, 63);
        QFont font;
        font.setPointSize(10);
        QSearchForm->setFont(font);
        lineEdit = new QLineEdit(QSearchForm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 20, 261, 20));

        retranslateUi(QSearchForm);

        QMetaObject::connectSlotsByName(QSearchForm);
    } // setupUi

    void retranslateUi(QDialog *QSearchForm)
    {
        QSearchForm->setWindowTitle(QCoreApplication::translate("QSearchForm", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSearchForm: public Ui_QSearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSEARCHFORM_H
