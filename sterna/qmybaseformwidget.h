#ifndef QMYBASEFORMWIDGET_H
#define QMYBASEFORMWIDGET_H

#include <QWidget>
#include "ui_qmybaseformwidget.h"
#include <QDateTime>
#include <QPainter>
#include <QKeyEvent>
#include <QWheelEvent>

class QMyBaseFormWidget : public QWidget
{
    Q_OBJECT

public:
    typedef struct {
        QString faktura_id;
        QString faktura_datum;
        QString faktura_komintent_id;
        QString faktura_komintent;
        QString faktura_iznos;
        QString faktura_ddv;
        QString faktura_vkupenIznos;
        QString faktura_valuta;
        QString faktura_iznos_1;
        QString faktura_iznos_2;
        QString faktura_iznos_3;
        QString faktura_iznos_4;
        QString faktura_iznos_5;
        QString faktura_iznos_6;
    } izlFakturaData;

    typedef struct
    {
        QDateTime fakturaData;
        QDateTime fakturaValuta;
        float iznos;
        float plateno;
        QString komintent_naziv;
        QString komintent_id;
    } tinfoFakturi;

    typedef struct
    {
        QString komintent_id;
        QString komintent_naziv;
        QString faktura_tip;
        QString faktura_id;
        QString datum;
        QString neplaten_iznos;
        QString plateno;
    } sostavInfo;

    typedef std::vector<tinfoFakturi> tListInfoFakturi;
    typedef std::map<QString , std::vector<sostavInfo>> type_m_map;

    QMyBaseFormWidget(QWidget *parent = nullptr);
    virtual ~QMyBaseFormWidget();

    void setCategoryWidget(QWidget * mWidget) { m_Widget = mWidget; }
    QWidget *getCategoryWidget() { return m_Widget; }
    void showEvent(QShowEvent *event);

public slots:
    void zoomIn();
    void zoomOut();
    void resetZoom();

protected:
    virtual void pressEscape();
    virtual void pressReturn();
    virtual void refresh();
    virtual void pressF9();
    virtual void mouseDoubleClickEvent(QMouseEvent * event) override;
    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void wheelEvent(QWheelEvent *event) override;

private:
    Ui::QMyBaseFormWidgetClass ui;
    QWidget *m_Widget;
    double m_zoomFactor;
    void scaleWidgets(double factor);
};

#endif // QMYBASEFORMWIDGET_H
