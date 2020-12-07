#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3307);
    db.setDatabaseName("utn");
    db.setUserName("root");
    db.setPassword("1234");

    if(db.open()){
         tableModel = new QSqlTableModel(this);
         tableModel->setTable("articulo");
         tableModel->setFilter("id limit 10"); //se aplica esto, ya que hay 14809 registros
         tableModel->select();
         ui->tableView->setModel(tableModel);
    }else{
        QMessageBox::information(this, "Error", "Conexion fallida");
    }
}


Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnGuardar_clicked()
{
    tableModel->insertRow(tableModel->rowCount());
}

void Widget::on_btnActualizar_clicked()
{
    tableModel->select();
}

void Widget::on_btnEliminar_clicked()
{
    tableModel->removeRow(ui->tableView->currentIndex().row());
}
