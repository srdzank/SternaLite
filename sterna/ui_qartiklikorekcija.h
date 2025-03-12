/********************************************************************************
** Form generated from reading UI file 'qartiklikorekcija.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QARTIKLIKOREKCIJA_H
#define UI_QARTIKLIKOREKCIJA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QArtikliKorekcijaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *QArtikliKorekcijaClass)
    {
        if (QArtikliKorekcijaClass->objectName().isEmpty())
            QArtikliKorekcijaClass->setObjectName("QArtikliKorekcijaClass");
        QArtikliKorekcijaClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QArtikliKorekcijaClass->setFont(font);
        layoutWidget = new QWidget(QArtikliKorekcijaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 831, 571));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);

        gridLayout->addWidget(lineEdit_6, 6, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font);

        gridLayout->addWidget(lineEdit_5, 5, 1, 1, 2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 7, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton, 2, 4, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 0, 1, 5);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 9, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 9, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 9, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 9, 3, 1, 1);


        retranslateUi(QArtikliKorekcijaClass);

        QMetaObject::connectSlotsByName(QArtikliKorekcijaClass);
    } // setupUi

    void retranslateUi(QWidget *QArtikliKorekcijaClass)
    {
        QArtikliKorekcijaClass->setWindowTitle(QCoreApplication::translate("QArtikliKorekcijaClass", "QArtikliKorekcija", nullptr));
        label->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\250\320\270\321\204\321\200\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("QArtikliKorekcijaClass", "0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("QArtikliKorekcijaClass", "5", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("QArtikliKorekcijaClass", "18", nullptr));

        pushButton->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230", nullptr));
        label_6->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\220\321\200\321\202\320\270\320\272\320\273\320\270 - \320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\235\320\260\320\267\320\270\320\262 \320\275\320\260 \320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "E\320\264\320\274", nullptr));
        label_4->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\240\320\265\321\204", nullptr));
        label_5->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\232\320\260\321\202\320\260\320\273\320\276\321\210\320\272\320\270 \320\261\321\200\320\276\321\230", nullptr));
        label_11->setText(QCoreApplication::translate("QArtikliKorekcijaClass", "\320\224\320\224\320\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QArtikliKorekcijaClass: public Ui_QArtikliKorekcijaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QARTIKLIKOREKCIJA_H
