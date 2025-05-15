#include "qmybaseformwidget.h"
#include <QKeyEvent>
#include <QPainter>
#include <QTableView>
#include <QWheelEvent>
#include <QApplication>

QMyBaseFormWidget::QMyBaseFormWidget(QWidget *parent)
    : QWidget(parent), m_Widget(nullptr), m_zoomFactor(1.0)
{
    ui.setupUi(this);
    setMouseTracking(true);
}

QMyBaseFormWidget::~QMyBaseFormWidget()
{
}

void QMyBaseFormWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->modifiers() & Qt::ControlModifier)
    {
        switch (event->key()) {
        case Qt::Key_Plus:
        case Qt::Key_Equal:
            zoomIn(); return;
        case Qt::Key_Minus:
            zoomOut(); return;
        case Qt::Key_0:
            resetZoom(); return;
        }
    }

    switch (event->key())
    {
    case Qt::Key_Escape:
        pressEscape(); break;
    case Qt::Key_Return:
    case Qt::Key_Enter:
        pressReturn(); break;
    case Qt::Key_F9:
        pressF9(); break;
    default:
        QWidget::keyPressEvent(event);
    }
}

void QMyBaseFormWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    pressReturn();
}

void QMyBaseFormWidget::wheelEvent(QWheelEvent *event)
{
    if (QApplication::keyboardModifiers() == Qt::ControlModifier)
    {
        if (event->angleDelta().y() > 0)
            zoomIn();
        else
            zoomOut();
        event->accept();
        return;
    }

    QWidget::wheelEvent(event);
}

void QMyBaseFormWidget::pressEscape() {}
void QMyBaseFormWidget::refresh() {}
void QMyBaseFormWidget::pressReturn() {}
void QMyBaseFormWidget::pressF9() {}

void QMyBaseFormWidget::zoomIn()
{
    scaleWidgets(1.1);
    m_zoomFactor *= 1.1;
}

void QMyBaseFormWidget::zoomOut()
{
    scaleWidgets(0.9);
    m_zoomFactor *= 0.9;
}

void QMyBaseFormWidget::resetZoom()
{
    scaleWidgets(1.0 / m_zoomFactor);
    m_zoomFactor = 1.0;
}

void QMyBaseFormWidget::scaleWidgets(double factor)
{
    QList<QWidget *> widgets = this->findChildren<QWidget *>();

    for (QWidget *w : widgets)
    {
        QFont f = w->font();
        f.setPointSizeF(f.pointSizeF() * factor);
        w->setFont(f);

        QSize sz = w->size();
        if (!sz.isEmpty())
        {
            w->resize(sz * factor);
        }

        if (auto tv = qobject_cast<QTableView *>(w))
        {
            for (int col = 0; col < tv->model()->columnCount(); ++col)
            {
                int cw = tv->columnWidth(col);
                tv->setColumnWidth(col, int(cw * factor));
            }
        }
    }

    this->resize(this->size() * factor);
}
