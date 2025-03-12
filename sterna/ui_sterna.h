/********************************************************************************
** Form generated from reading UI file 'sterna.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STERNA_H
#define UI_STERNA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sternaClass
{
public:
    QAction *action_KomintentiLista;
    QAction *action_MyArtikli;
    QAction *actionMyIspratnici;
    QAction *actionMyPriemnici;
    QAction *actionMyPovratnica;
    QAction *actionMyFakturi;
    QAction *actionBanki;
    QAction *actionProFaktura;
    QAction *actionKasi;
    QAction *actionDDV;
    QAction *actionLager;
    QAction *actionIzvestai;
    QAction *actionIzvodi;
    QAction *actionPrinter;
    QAction *actionMyFakturiVlezni;
    QAction *actionAnalitikaKomintent;
    QAction *actionIzjava;
    QAction *actionDnevenPromet;
    QAction *actionClose;
    QAction *actionPreview;
    QAction *actionAnalitikaArtikli;
    QAction *action_n;
    QAction *actionSearch;
    QAction *actionPeriodicenIzvestaj;
    QAction *actionFinansova_Kartica;
    QAction *actionMyOdobrenie;
    QAction *actionVraboteni;
    QAction *actionSmetki;
    QAction *actionKalkulacii;
    QAction *actionIzvestaPromenaCeni;
    QAction *actionFakturiMaster;
    QAction *actionPopis;
    QAction *actionDnevnoFiskalnoZatvaranje;
    QAction *actionPorackiSmetki;
    QAction *actionKontrolenIzvestaj;
    QAction *actionDetalenIzvestajPoPeriod;
    QAction *actionPodesuvanjeDatumCas;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_4;
    QMenu *menu_3;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *toolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;

    void setupUi(QMainWindow *sternaClass)
    {
        if (sternaClass->objectName().isEmpty())
            sternaClass->setObjectName("sternaClass");
        sternaClass->resize(1284, 728);
        QFont font;
        font.setPointSize(10);
        sternaClass->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/imagesCA93H0U6.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sternaClass->setWindowIcon(icon);
        action_KomintentiLista = new QAction(sternaClass);
        action_KomintentiLista->setObjectName("action_KomintentiLista");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/sterna/Resources/imagesCADR5ZAI.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_KomintentiLista->setIcon(icon1);
        action_MyArtikli = new QAction(sternaClass);
        action_MyArtikli->setObjectName("action_MyArtikli");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/sterna/Resources/isimple_system_lnx-Icons-32X32-paste_png-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_MyArtikli->setIcon(icon2);
        actionMyIspratnici = new QAction(sternaClass);
        actionMyIspratnici->setObjectName("actionMyIspratnici");
        actionMyIspratnici->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/sterna/Resources/add-file-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMyIspratnici->setIcon(icon3);
        actionMyIspratnici->setVisible(true);
        actionMyPriemnici = new QAction(sternaClass);
        actionMyPriemnici->setObjectName("actionMyPriemnici");
        actionMyPriemnici->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/sterna/Resources/delete-file-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMyPriemnici->setIcon(icon4);
        actionMyPriemnici->setVisible(false);
        actionMyPovratnica = new QAction(sternaClass);
        actionMyPovratnica->setObjectName("actionMyPovratnica");
        actionMyPovratnica->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/sterna/Resources/Pastel_Icons-folder_open_ico-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMyPovratnica->setIcon(icon5);
        actionMyPovratnica->setVisible(true);
        actionMyFakturi = new QAction(sternaClass);
        actionMyFakturi->setObjectName("actionMyFakturi");
        actionMyFakturi->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/sterna/Resources/invoice.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMyFakturi->setIcon(icon6);
        actionMyFakturi->setVisible(false);
        actionBanki = new QAction(sternaClass);
        actionBanki->setObjectName("actionBanki");
        actionBanki->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/sterna/Resources/bank.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBanki->setIcon(icon7);
        actionBanki->setVisible(true);
        actionProFaktura = new QAction(sternaClass);
        actionProFaktura->setObjectName("actionProFaktura");
        actionProFaktura->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/sterna/Resources/pro_invoice.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionProFaktura->setIcon(icon8);
        actionProFaktura->setVisible(true);
        actionKasi = new QAction(sternaClass);
        actionKasi->setObjectName("actionKasi");
        actionKasi->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/sterna/Resources/kasa1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionKasi->setIcon(icon9);
        actionKasi->setVisible(false);
        actionDDV = new QAction(sternaClass);
        actionDDV->setObjectName("actionDDV");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/sterna/Resources/ddv.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDDV->setIcon(icon10);
        actionDDV->setVisible(false);
        actionLager = new QAction(sternaClass);
        actionLager->setObjectName("actionLager");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/sterna/Resources/lager.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLager->setIcon(icon11);
        actionIzvestai = new QAction(sternaClass);
        actionIzvestai->setObjectName("actionIzvestai");
        actionIzvestai->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/sterna/Resources/reports.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionIzvestai->setIcon(icon12);
        actionIzvestai->setVisible(true);
        actionIzvodi = new QAction(sternaClass);
        actionIzvodi->setObjectName("actionIzvodi");
        actionIzvodi->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/sterna/Resources/isimple_system_lnx-Icons-32X32-file_new_png-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionIzvodi->setIcon(icon13);
        actionIzvodi->setVisible(true);
        actionPrinter = new QAction(sternaClass);
        actionPrinter->setObjectName("actionPrinter");
        actionPrinter->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/sterna/Resources/Printer-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPrinter->setIcon(icon14);
        actionPrinter->setVisible(true);
        actionPrinter->setIconVisibleInMenu(true);
        actionMyFakturiVlezni = new QAction(sternaClass);
        actionMyFakturiVlezni->setObjectName("actionMyFakturiVlezni");
        actionMyFakturiVlezni->setIcon(icon12);
        actionMyFakturiVlezni->setVisible(false);
        actionAnalitikaKomintent = new QAction(sternaClass);
        actionAnalitikaKomintent->setObjectName("actionAnalitikaKomintent");
        actionAnalitikaKomintent->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/sterna/Resources/k-color-edit-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAnalitikaKomintent->setIcon(icon15);
        actionAnalitikaKomintent->setVisible(false);
        actionIzjava = new QAction(sternaClass);
        actionIzjava->setObjectName("actionIzjava");
        actionIzjava->setEnabled(false);
        actionIzjava->setIcon(icon8);
        actionIzjava->setVisible(false);
        actionDnevenPromet = new QAction(sternaClass);
        actionDnevenPromet->setObjectName("actionDnevenPromet");
        actionDnevenPromet->setEnabled(false);
        actionDnevenPromet->setIcon(icon7);
        actionDnevenPromet->setVisible(false);
        actionClose = new QAction(sternaClass);
        actionClose->setObjectName("actionClose");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/sterna/Resources/close-32x32.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon16);
        actionPreview = new QAction(sternaClass);
        actionPreview->setObjectName("actionPreview");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/sterna/Resources/Preview-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPreview->setIcon(icon17);
        actionAnalitikaArtikli = new QAction(sternaClass);
        actionAnalitikaArtikli->setObjectName("actionAnalitikaArtikli");
        actionAnalitikaArtikli->setIcon(icon2);
        action_n = new QAction(sternaClass);
        action_n->setObjectName("action_n");
        action_n->setIcon(icon5);
        action_n->setVisible(false);
        actionSearch = new QAction(sternaClass);
        actionSearch->setObjectName("actionSearch");
        actionSearch->setEnabled(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/sterna/Resources/zoom-in-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSearch->setIcon(icon18);
        actionSearch->setVisible(true);
        actionPeriodicenIzvestaj = new QAction(sternaClass);
        actionPeriodicenIzvestaj->setObjectName("actionPeriodicenIzvestaj");
        actionPeriodicenIzvestaj->setEnabled(true);
        actionPeriodicenIzvestaj->setIcon(icon7);
        actionPeriodicenIzvestaj->setVisible(true);
        actionFinansova_Kartica = new QAction(sternaClass);
        actionFinansova_Kartica->setObjectName("actionFinansova_Kartica");
        actionFinansova_Kartica->setIcon(icon9);
        actionMyOdobrenie = new QAction(sternaClass);
        actionMyOdobrenie->setObjectName("actionMyOdobrenie");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/sterna/Resources/grid1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMyOdobrenie->setIcon(icon19);
        actionMyOdobrenie->setVisible(false);
        actionVraboteni = new QAction(sternaClass);
        actionVraboteni->setObjectName("actionVraboteni");
        actionVraboteni->setIcon(icon1);
        actionSmetki = new QAction(sternaClass);
        actionSmetki->setObjectName("actionSmetki");
        actionSmetki->setEnabled(true);
        actionSmetki->setIcon(icon9);
        actionSmetki->setVisible(true);
        actionKalkulacii = new QAction(sternaClass);
        actionKalkulacii->setObjectName("actionKalkulacii");
        actionKalkulacii->setIcon(icon9);
        actionKalkulacii->setVisible(true);
        actionIzvestaPromenaCeni = new QAction(sternaClass);
        actionIzvestaPromenaCeni->setObjectName("actionIzvestaPromenaCeni");
        actionIzvestaPromenaCeni->setIcon(icon19);
        actionFakturiMaster = new QAction(sternaClass);
        actionFakturiMaster->setObjectName("actionFakturiMaster");
        actionFakturiMaster->setIcon(icon8);
        actionPopis = new QAction(sternaClass);
        actionPopis->setObjectName("actionPopis");
        actionPopis->setEnabled(false);
        actionPopis->setIcon(icon5);
        actionPopis->setVisible(false);
        actionDnevnoFiskalnoZatvaranje = new QAction(sternaClass);
        actionDnevnoFiskalnoZatvaranje->setObjectName("actionDnevnoFiskalnoZatvaranje");
        actionPorackiSmetki = new QAction(sternaClass);
        actionPorackiSmetki->setObjectName("actionPorackiSmetki");
        actionPorackiSmetki->setEnabled(false);
        actionPorackiSmetki->setIcon(icon2);
        actionPorackiSmetki->setVisible(false);
        actionKontrolenIzvestaj = new QAction(sternaClass);
        actionKontrolenIzvestaj->setObjectName("actionKontrolenIzvestaj");
        actionDetalenIzvestajPoPeriod = new QAction(sternaClass);
        actionDetalenIzvestajPoPeriod->setObjectName("actionDetalenIzvestajPoPeriod");
        actionPodesuvanjeDatumCas = new QAction(sternaClass);
        actionPodesuvanjeDatumCas->setObjectName("actionPodesuvanjeDatumCas");
        centralWidget = new QWidget(sternaClass);
        centralWidget->setObjectName("centralWidget");
        sternaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sternaClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1284, 29));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName("menu_4");
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName("menu_3");
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        sternaClass->setMenuBar(menuBar);
        toolBar = new QToolBar(sternaClass);
        toolBar->setObjectName("toolBar");
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sternaClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(sternaClass);
        statusBar->setObjectName("statusBar");
        sternaClass->setStatusBar(statusBar);
        toolBar_2 = new QToolBar(sternaClass);
        toolBar_2->setObjectName("toolBar_2");
        toolBar_2->setOrientation(Qt::Horizontal);
        toolBar_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sternaClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(sternaClass);
        toolBar_3->setObjectName("toolBar_3");
        toolBar_3->setEnabled(true);
        toolBar_3->setOrientation(Qt::Horizontal);
        toolBar_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sternaClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(sternaClass);
        toolBar_4->setObjectName("toolBar_4");
        toolBar_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sternaClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_4);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu_4->addAction(actionLager);
        menu_4->addAction(actionIzvestai);
        menu_4->addAction(actionDnevenPromet);
        menu_4->addSeparator();
        menu_4->addAction(actionAnalitikaKomintent);
        menu_4->addAction(actionAnalitikaArtikli);
        menu_4->addSeparator();
        menu_4->addAction(actionFinansova_Kartica);
        menu_3->addAction(actionMyFakturiVlezni);
        menu_3->addAction(actionKalkulacii);
        menu_3->addAction(actionMyFakturi);
        menu_3->addAction(actionProFaktura);
        menu_3->addSeparator();
        menu_3->addAction(actionIzvodi);
        menu->addAction(action_MyArtikli);
        menu->addAction(actionDDV);
        menu->addAction(actionBanki);
        menu->addAction(actionKasi);
        menu->addAction(action_KomintentiLista);
        menu->addSeparator();
        menu->addAction(actionPreview);
        menu->addAction(actionPrinter);
        menu->addAction(actionClose);
        menu->addAction(actionVraboteni);
        menu_2->addAction(actionDnevnoFiskalnoZatvaranje);
        menu_2->addAction(actionKontrolenIzvestaj);
        menu_2->addAction(actionDetalenIzvestajPoPeriod);
        menu_2->addAction(actionPodesuvanjeDatumCas);
        toolBar->addAction(action_MyArtikli);
        toolBar->addAction(action_KomintentiLista);
        toolBar->addAction(actionIzjava);
        toolBar->addAction(actionMyPriemnici);
        toolBar->addAction(action_n);
        toolBar->addAction(actionKasi);
        toolBar_2->addAction(actionKalkulacii);
        toolBar_2->addAction(actionMyFakturiVlezni);
        toolBar_2->addAction(actionMyIspratnici);
        toolBar_2->addAction(actionMyFakturi);
        toolBar_2->addAction(actionMyPovratnica);
        toolBar_2->addAction(actionProFaktura);
        toolBar_2->addAction(actionFakturiMaster);
        toolBar_2->addAction(actionSmetki);
        toolBar_2->addAction(actionPorackiSmetki);
        toolBar_2->addAction(actionIzvodi);
        toolBar_2->addAction(actionMyOdobrenie);
        toolBar_3->addAction(actionLager);
        toolBar_3->addAction(actionAnalitikaKomintent);
        toolBar_3->addAction(actionAnalitikaArtikli);
        toolBar_3->addAction(actionFinansova_Kartica);
        toolBar_3->addAction(actionPopis);
        toolBar_4->addAction(actionSearch);
        toolBar_4->addAction(actionPreview);
        toolBar_4->addAction(actionIzvestaPromenaCeni);
        toolBar_4->addAction(actionDnevenPromet);
        toolBar_4->addAction(actionPeriodicenIzvestaj);
        toolBar_4->addAction(actionIzvestai);
        toolBar_4->addAction(actionClose);

        retranslateUi(sternaClass);

        QMetaObject::connectSlotsByName(sternaClass);
    } // setupUi

    void retranslateUi(QMainWindow *sternaClass)
    {
        sternaClass->setWindowTitle(QCoreApplication::translate("sternaClass", "Sterna", nullptr));
        action_KomintentiLista->setText(QCoreApplication::translate("sternaClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        action_KomintentiLista->setShortcut(QCoreApplication::translate("sternaClass", "Alt+K", nullptr));
#endif // QT_CONFIG(shortcut)
        action_MyArtikli->setText(QCoreApplication::translate("sternaClass", "\320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
#if QT_CONFIG(shortcut)
        action_MyArtikli->setShortcut(QCoreApplication::translate("sternaClass", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyIspratnici->setText(QCoreApplication::translate("sternaClass", "\320\230\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionMyIspratnici->setShortcut(QCoreApplication::translate("sternaClass", "Alt+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyPriemnici->setText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionMyPriemnici->setShortcut(QCoreApplication::translate("sternaClass", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyPovratnica->setText(QCoreApplication::translate("sternaClass", "\320\237\320\276\320\262\321\200\320\260\321\202\320\275\320\270\321\206\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionMyPovratnica->setShortcut(QCoreApplication::translate("sternaClass", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyFakturi->setText(QCoreApplication::translate("sternaClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
        actionMyFakturi->setIconText(QCoreApplication::translate("sternaClass", "\320\230\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\270\n"
"\320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionMyFakturi->setShortcut(QCoreApplication::translate("sternaClass", "Alt+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBanki->setText(QCoreApplication::translate("sternaClass", "\320\221\320\260\320\275\320\272\320\270", nullptr));
        actionProFaktura->setText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\276\320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
        actionKasi->setText(QCoreApplication::translate("sternaClass", "\320\232\320\260\321\201\320\260", nullptr));
#if QT_CONFIG(tooltip)
        actionKasi->setToolTip(QCoreApplication::translate("sternaClass", "\320\232\320\260\321\201\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDDV->setText(QCoreApplication::translate("sternaClass", "\320\224\320\224\320\222", nullptr));
        actionLager->setText(QCoreApplication::translate("sternaClass", "\320\233\320\260\320\263\320\265\321\200 \320\233\320\270\321\201\321\202\320\260", nullptr));
#if QT_CONFIG(shortcut)
        actionLager->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIzvestai->setText(QCoreApplication::translate("sternaClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\270 Gantt Chart", nullptr));
        actionIzvestai->setIconText(QCoreApplication::translate("sternaClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\270\n"
" Gantt Chart", nullptr));
        actionIzvodi->setText(QCoreApplication::translate("sternaClass", "\320\230\320\267\320\262\320\276\320\264\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionIzvodi->setShortcut(QCoreApplication::translate("sternaClass", "Alt+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrinter->setText(QCoreApplication::translate("sternaClass", "Print", nullptr));
#if QT_CONFIG(tooltip)
        actionPrinter->setToolTip(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\275\321\202\320\265\321\200 (Ctrl+P)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrinter->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyFakturiVlezni->setText(QCoreApplication::translate("sternaClass", "\320\222\320\273\320\265\320\267\320\275\320\270 \320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
        actionMyFakturiVlezni->setIconText(QCoreApplication::translate("sternaClass", "\320\222\320\273\320\265\320\267\320\275\320\270\n"
" \320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
        actionAnalitikaKomintent->setText(QCoreApplication::translate("sternaClass", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260 \320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202\320\270", nullptr));
        actionAnalitikaKomintent->setIconText(QCoreApplication::translate("sternaClass", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260\n"
" \320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionAnalitikaKomintent->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+Shift+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIzjava->setText(QCoreApplication::translate("sternaClass", "\320\230\320\267\321\230\320\260\320\262\320\260", nullptr));
#if QT_CONFIG(tooltip)
        actionIzjava->setToolTip(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260 \320\276\320\264 \321\204\320\270\320\267\320\270\321\207\320\272\320\276 \320\273\320\270\321\206\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionIzjava->setShortcut(QCoreApplication::translate("sternaClass", "Alt+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDnevenPromet->setText(QCoreApplication::translate("sternaClass", "\320\224\320\275\320\265\320\262\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
        actionDnevenPromet->setIconText(QCoreApplication::translate("sternaClass", "\320\224\320\275\320\265\320\262\320\265\320\275\n"
"\320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
#if QT_CONFIG(tooltip)
        actionDnevenPromet->setToolTip(QCoreApplication::translate("sternaClass", "\320\224\320\275\320\265\320\262\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("sternaClass", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreview->setText(QCoreApplication::translate("sternaClass", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        actionPreview->setToolTip(QCoreApplication::translate("sternaClass", "Preview (Ctrl+W)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPreview->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAnalitikaArtikli->setText(QCoreApplication::translate("sternaClass", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260 \320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
        actionAnalitikaArtikli->setIconText(QCoreApplication::translate("sternaClass", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260\n"
" \320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalitikaArtikli->setToolTip(QCoreApplication::translate("sternaClass", "\320\220\320\275\320\260\320\273\320\270\321\202\320\270\320\272\320\260 \320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAnalitikaArtikli->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_n->setText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274 \320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
        action_n->setIconText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274\n"
"\320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
#if QT_CONFIG(tooltip)
        action_n->setToolTip(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274 \320\220\321\200\321\202\320\270\320\272\320\273\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSearch->setText(QCoreApplication::translate("sternaClass", "Search", nullptr));
#if QT_CONFIG(tooltip)
        actionSearch->setToolTip(QCoreApplication::translate("sternaClass", "Search", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSearch->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPeriodicenIzvestaj->setText(QCoreApplication::translate("sternaClass", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
        actionPeriodicenIzvestaj->setIconText(QCoreApplication::translate("sternaClass", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\320\275\n"
" \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
#if QT_CONFIG(tooltip)
        actionPeriodicenIzvestaj->setToolTip(QCoreApplication::translate("sternaClass", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFinansova_Kartica->setText(QCoreApplication::translate("sternaClass", "\320\236\320\261\320\262\321\200\321\201\320\272\320\270", nullptr));
        actionFinansova_Kartica->setIconText(QCoreApplication::translate("sternaClass", "\320\236\320\261\320\262\321\200\321\201\320\272\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actionFinansova_Kartica->setToolTip(QCoreApplication::translate("sternaClass", "\320\244\320\270\320\275\320\260\321\201\320\276\320\262\320\260 \320\232\320\260\321\200\321\202\320\270\321\206\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFinansova_Kartica->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMyOdobrenie->setText(QCoreApplication::translate("sternaClass", "\320\232\320\275\320\270\320\266\320\275\320\276 \320\236\320\264\320\276\320\261\321\200\320\265\320\275\320\270\320\265", nullptr));
        actionMyOdobrenie->setIconText(QCoreApplication::translate("sternaClass", "\320\232\320\275\320\270\320\266\320\275\320\276\n"
"\320\236\320\264\320\276\320\261\321\200\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(tooltip)
        actionMyOdobrenie->setToolTip(QCoreApplication::translate("sternaClass", "\320\236\320\264\320\276\320\261\321\200\320\265\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVraboteni->setText(QCoreApplication::translate("sternaClass", "\320\222\321\200\320\260\320\261\320\276\321\202\320\265\320\275\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actionVraboteni->setToolTip(QCoreApplication::translate("sternaClass", "\320\222\321\200\320\260\320\261\320\276\321\202\320\265\320\275\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionVraboteni->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSmetki->setText(QCoreApplication::translate("sternaClass", "\320\241\320\274\320\265\321\202\320\272\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actionSmetki->setToolTip(QCoreApplication::translate("sternaClass", "\320\241\320\274\320\265\321\202\320\272\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSmetki->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKalkulacii->setText(QCoreApplication::translate("sternaClass", " \320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260 -\320\232\320\260\320\273\320\272\321\203\320\273\320\260\321\206\320\270\321\230\320\260", nullptr));
        actionKalkulacii->setIconText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260\n"
"\320\232\320\260\320\273\320\272\321\203\320\273\320\260\321\206\320\270\321\230\320\260", nullptr));
#if QT_CONFIG(shortcut)
        actionKalkulacii->setShortcut(QCoreApplication::translate("sternaClass", "Alt+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIzvestaPromenaCeni->setText(QCoreApplication::translate("sternaClass", "IzvestaPromenaCeni", nullptr));
        actionIzvestaPromenaCeni->setIconText(QCoreApplication::translate("sternaClass", "\320\237\321\200\320\276\320\274\320\265\320\275\320\260 \320\275\320\260\n"
"\321\206\320\265\320\275\320\270", nullptr));
#if QT_CONFIG(shortcut)
        actionIzvestaPromenaCeni->setShortcut(QCoreApplication::translate("sternaClass", "Ctrl+P, Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFakturiMaster->setText(QCoreApplication::translate("sternaClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actionFakturiMaster->setToolTip(QCoreApplication::translate("sternaClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPopis->setText(QCoreApplication::translate("sternaClass", "Popis", nullptr));
#if QT_CONFIG(tooltip)
        actionPopis->setToolTip(QCoreApplication::translate("sternaClass", "\320\237\320\276\320\277\320\270\321\201", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDnevnoFiskalnoZatvaranje->setText(QCoreApplication::translate("sternaClass", "\320\224\320\275\320\265\320\262\320\275\320\276 \320\244\320\270\321\201\320\272\320\260\320\273\320\275\320\276 \320\227\320\260\321\202\320\262\320\260\321\200\320\260\321\232\320\265", nullptr));
        actionPorackiSmetki->setText(QCoreApplication::translate("sternaClass", "\320\237\320\276\321\200\320\260\321\207\320\272\320\260 \320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        actionPorackiSmetki->setIconText(QCoreApplication::translate("sternaClass", "\320\237\320\276\321\200\320\260\321\207\320\272\320\260\n"
"\320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        actionKontrolenIzvestaj->setText(QCoreApplication::translate("sternaClass", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230", nullptr));
        actionDetalenIzvestajPoPeriod->setText(QCoreApplication::translate("sternaClass", "\320\224\320\265\321\202\320\260\320\273\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230 \320\277\320\276 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
        actionPodesuvanjeDatumCas->setText(QCoreApplication::translate("sternaClass", "\320\237\320\276\320\264\320\265\321\201\321\203\320\262\320\260\321\232\320\265 \320\224\320\260\321\202\321\203\320\274 \320\247\320\260\321\201", nullptr));
        menu_4->setTitle(QCoreApplication::translate("sternaClass", "\320\230\320\267\320\262\320\265\321\210\321\202\320\260\320\270", nullptr));
        menu_3->setTitle(QCoreApplication::translate("sternaClass", "\320\234\320\260\321\202\320\265\321\200\320\270\321\230\320\260\320\273\320\275\320\276-\320\244\320\270\320\275\320\260\320\275\321\201\320\276\320\262\320\276", nullptr));
        menu->setTitle(QCoreApplication::translate("sternaClass", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\270", nullptr));
        menu_2->setTitle(QCoreApplication::translate("sternaClass", "\320\244\320\270\321\201\320\272\320\260\320\273\320\275\320\270 \320\241\320\274\320\265\321\202\320\272\320\270", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("sternaClass", "\320\234\320\260\321\202\320\265\321\200\320\270\321\230\320\260\320\273\320\275\320\276", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("sternaClass", "\320\244\320\270\320\275\320\260\320\275\321\201\320\276\320\262\320\276", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("sternaClass", "\320\230\320\267\320\262\320\265\321\210\321\202\320\260\320\270", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("sternaClass", "\320\220\320\273\320\260\321\202\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sternaClass: public Ui_sternaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STERNA_H
