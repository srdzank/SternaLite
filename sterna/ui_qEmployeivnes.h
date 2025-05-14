/********************************************************************************
** Form generated from reading UI file 'qEmployeivnes.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEMPLOYEIVNES_H
#define UI_QEMPLOYEIVNES_H

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

class Ui_QEmployeVnesClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_14;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QEmployeVnesClass)
    {
        if (QEmployeVnesClass->objectName().isEmpty())
            QEmployeVnesClass->setObjectName("QEmployeVnesClass");
        QEmployeVnesClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QEmployeVnesClass->setFont(font);
        layoutWidget = new QWidget(QEmployeVnesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 721, 281));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 0, 0, 1, 2);

        lineEdit_14 = new QLineEdit(layoutWidget);
        lineEdit_14->setObjectName("lineEdit_14");

        gridLayout->addWidget(lineEdit_14, 1, 1, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font);
        lineEdit_5->setMaxLength(15);

        gridLayout->addWidget(lineEdit_5, 6, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setFont(font);

        gridLayout->addWidget(lineEdit_7, 8, 1, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setFont(font);

        gridLayout->addWidget(lineEdit_8, 9, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 4, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);

        gridLayout->addWidget(lineEdit_6, 7, 1, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(label_4);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit_14, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);

        retranslateUi(QEmployeVnesClass);

        QMetaObject::connectSlotsByName(QEmployeVnesClass);
    } // setupUi

    void retranslateUi(QWidget *QEmployeVnesClass)
    {
        QEmployeVnesClass->setWindowTitle(QCoreApplication::translate("QEmployeVnesClass", "QEmployeVnes", nullptr));
        label_5->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\243\320\273\320\276\320\263\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\237\321\200\320\265\320\267\320\270\320\274\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\230\320\274\320\265", nullptr));
        label->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\233\320\276\320\267\320\270\320\275\320\272\320\260", nullptr));
        label_16->setText(QCoreApplication::translate("QEmployeVnesClass", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\222\321\200\320\260\320\261\320\276\321\202\320\265\320\275\320\270 - \320\222\320\275\320\265\321\201 </span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_8->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\232\320\276\321\200\320\270\321\201\320\275\320\270\321\207\320\272\320\270 \320\221\321\200\320\276\321\230", nullptr));
        label_4->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\220\320\264\321\200\320\265\321\201\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\223\321\200\320\260\320\264", nullptr));
        label_14->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\232\320\276\321\200\320\270\321\201\320\275\320\270\321\207\320\272\320\276 \320\230\320\274\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("QEmployeVnesClass", "\320\222\320\275\320\265\321\201\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QEmployeVnesClass: public Ui_QEmployeVnesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEMPLOYEIVNES_H
