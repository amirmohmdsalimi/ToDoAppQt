#include "choosebackgroundcolorwindow.h"
#include "ui_choosebackgroundcolorwindow.h"
#include <qdebug.h>

ChooseBackgroundColorWindow::ChooseBackgroundColorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseBackgroundColorWindow)
{
    ui->setupUi(this);
}

ChooseBackgroundColorWindow::~ChooseBackgroundColorWindow()
{
    delete ui;
}

void ChooseBackgroundColorWindow::on_CancelbgColor_clicked()
{
    close();
}

void ChooseBackgroundColorWindow::on_ApplybgColor_clicked()
{
    QString Color;
    if(ui->BlueRadioButton->isChecked()){
        Color = "blue";
    }
    if(ui->GreenRadioButton->isChecked()){
        Color = "green";
    }
    if(ui->GrayRadioButton->isChecked()){
        Color = "gray";
    }
    if(ui->PinkRadioButton->isChecked()){
        Color = "pink";
    }
    if(ui->BrownRadioButton->isChecked()){
        Color = "brown";
    }
    if(ui->PurpleRadioButton->isChecked()){
        Color = "purple";
    }

    emit sendData(Color);
    close();
}
