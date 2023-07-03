#include "deleditwindow.h"
#include "ui_deleditwindow.h"
#include "choosebackgroundcolorwindow.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QFile>
#include <qDebug>
#include <QDate>

DelEditwindow::DelEditwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelEditwindow)
{
    ui->setupUi(this);



}
DelEditwindow::~DelEditwindow()
{
    delete ui;
}


void DelEditwindow::comboxitemset(){
    ui->TaskcomboBox->clear();
    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    QString json_string;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray jarray = jsonDoc.array();
        QList<QJsonObject> jsonObjects;
        for (const QJsonValue &value : jarray) {
            if (value.isObject()) {
                jsonObjects.append(value.toObject());
            }
        }
        QString title;
        for (const QJsonObject &jsonObject : jsonObjects)  {
            title = jsonObject.value("Title").toString();
            ui->TaskcomboBox->addItem(title);
        }
    }
}


void DelEditwindow::receiveData(const QString& data) {
    setStyleSheet("background-color: "+data+";");
}





void DelEditwindow::on_TaskcomboBox_currentIndexChanged(const QString &arg1)
{
    QString selecteddtask = ui->TaskcomboBox->currentText();
    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    QString json_string;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray jarray = jsonDoc.array();
        QList<QJsonObject> jsonObjects;
        for (const QJsonValue &value : jarray) {
            if (value.isObject()) {
                jsonObjects.append(value.toObject());
            }
        }
        for (const QJsonObject &jsonObject : jsonObjects)  {
            QString title = jsonObject.value("Title").toString();
            if(title == selecteddtask){
                ui->TasklineEdit->setText(title);
                ui->DesctextEdit->setText(jsonObject.value("Description").toString());
                ui->PrioritycomboBox->setCurrentText(jsonObject.value("Priority").toString());
                bool check;
                if(jsonObject.value("ItsDone").toString() == "true"){
                    check = true;
                }else{
                    check = false;
                }
                ui->ItsdonecheckBox->setChecked(check);
                ui->Datelabel->setText(jsonObject.value("Time").toString());
                ui->DateofEditlabel->setText(jsonObject.value("Date of Edit").toString());


            }
        }


    }

}

void DelEditwindow::on_pushButton_3_clicked()
{
    close();
}

void DelEditwindow::on_DeletepushButton_clicked()
{
    QString selectedTitle = ui->TasklineEdit->text();


    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    QString json_string;
    QJsonDocument jsonDoc_write;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray write_jarray;
        QJsonArray jarray = jsonDoc.array();
        QList<QJsonObject> jsonObjects;
        for (const QJsonValue &value : jarray) {
            if (value.isObject()) {
                jsonObjects.append(value.toObject());
            }
        }
        for (const QJsonObject &jsonObject : jsonObjects)  {
            QString title = jsonObject.value("Title").toString();
            if(title != selectedTitle){
                write_jarray.append(jsonObject);
                jsonDoc_write.setArray(write_jarray);
            }
        }
    }
    if (file.open(QIODevice::WriteOnly)) {
        file.write(jsonDoc_write.toJson(QJsonDocument::Indented));
        file.close();
    } else {
        qDebug()<<"Error opening file for writing" ;
    }
    emit buttonclicked();
    QMessageBox::information(this,"Deleted","Task successfully deleted");
    close();
}

void DelEditwindow::on_EditpushButton_clicked()
{

    QString selectedTitle = ui->TaskcomboBox->currentText();
    QDate date = QDate::currentDate();
    QString dateofedit = date.toString("dd.MM.yyyy");

    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    QString json_string;
    QJsonDocument writejsonDoc;
    QJsonArray writejarray;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray jarray = jsonDoc.array();
        QList<QJsonObject> jsonObjects;
        for (const QJsonValue &value : jarray) {
            if (value.isObject()) {
                jsonObjects.append(value.toObject());
            }
        }
        for (QJsonObject &jsonObject : jsonObjects)  {
            QString title = jsonObject.value("Title").toString();
            if(title == selectedTitle){
                QString title = ui->TasklineEdit->text();
                QString desc = ui->DesctextEdit->toPlainText();
                QString priority = ui->PrioritycomboBox->currentText();
                QString Time = ui->Datelabel->text();
                QString itsdone = "false";
                if(ui->ItsdonecheckBox->isChecked()){
                    itsdone ="true";
                }
                if (title == "" || desc == ""){
                    QMessageBox::warning(this,"Warning","Title or Description field is empty");
                }
                jsonObject.insert("Title", title);
                jsonObject.insert("Description", desc);
                jsonObject.insert("Priority", priority);
                jsonObject.insert("Time", Time);
                jsonObject.insert("ItsDone", itsdone);
                jsonObject.insert("Date of Edit", dateofedit);
            }
            writejarray.append(jsonObject);
        }
        writejsonDoc.setArray(writejarray);
    }
    if (file.open(QIODevice::WriteOnly)) {
        file.write(writejsonDoc.toJson(QJsonDocument::Indented));
        file.close();
    } else {
        qDebug()<<"Error opening file for writing" ;
    }
    emit buttonclicked();
    QMessageBox::information(this,"Edited","Task successfully edited");

    close();
}








