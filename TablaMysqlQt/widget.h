#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

//class QSqlTableModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnActualizar_clicked();

    void on_btnGuardar_clicked();

    void on_btnEliminar_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;
};
#endif // WIDGET_H
