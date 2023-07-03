#include "deletetaskwindow.h"
#include "ui_deletetaskwindow.h"

DeleteTaskWindow::DeleteTaskWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteTaskWindow)
{
    ui->setupUi(this);
}

DeleteTaskWindow::~DeleteTaskWindow()
{
    delete ui;
}

void DeleteTaskWindow::on_comboBox_activated(const QString &arg1)
{

}
