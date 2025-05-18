#ifndef QVLEZNIPROFAKTURILISTA_H
#define QVLEZNIPROFAKTURILISTA_H

#include "qmybaseformwidget.h"
#include <QStandardItemModel>
#include <QItemSelection>
#include <QTableView>


class QVlezniProFakturiLista : public QMyBaseFormWidget
{
    Q_OBJECT

public:
    QVlezniProFakturiLista(QWidget *parent = nullptr);
    ~QVlezniProFakturiLista();
    void lista(const QString& nameSearch);
    void lista_detail(const QString& nameSearch);
    int getSelectedId() { return m_selectedText.toInt(); }
    virtual void pressEscape();

private:
    QStandardItemModel *model;
    QHeaderView *header;
    QStandardItemModel *model2;
    QHeaderView *header2;
    QString m_selectedText;

private slots:
    void selectionChanged(QModelIndex modelX, QModelIndex modelY);

signals:
    void closeW();
};

#endif // QVLEZNIPROFAKTURILISTA_H
