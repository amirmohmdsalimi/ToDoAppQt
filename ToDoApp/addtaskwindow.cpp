#include "addtaskwindow.h"
#include "ui_addtaskwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDate>
#include <QList>
#include <QDateTime>
#include <QDebug>

AddTaskWindow::AddTaskWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTaskWindow)
{
    ui->setupUi(this);
}

AddTaskWindow::~AddTaskWindow()
{
    delete ui;
}

void AddTaskWindow::receiveData(const QString& data) {
    setStyleSheet("background-color: "+data+";");
}


// a function to write json
void writeJson(QString title, QString description, QString priority, QString itsDone) {
    //setting date
    QDate date = QDate::currentDate();
    QString formattedTime = date.toString("dd.MM.yyyy");
    //
    //make a new json obj
    QJsonObject jsonObj;
    jsonObj["Title"] =title;
    jsonObj["Description"] =description;
    jsonObj["Priority"] =priority;
    jsonObj["Time"] =formattedTime;
    jsonObj["ItsDone"] =itsDone;
    jsonObj["Date of Edit"]= "Not Edited";
    //
    //first we read the json file and append new object then write all the json to the file
    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    QString json_string;
    QJsonDocument jsonDoc_write ;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc_read;
        jsonDoc_read = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray jarray = jsonDoc_read.array();
        jarray.append(jsonObj);
        jsonDoc_write.setArray(jarray);
    }
    file.close();
    if (file.open(QIODevice::WriteOnly)) {
        file.write(jsonDoc_write.toJson(QJsonDocument::Indented));
        file.close();
    } else {
        qDebug()<<"Error opening file for writing" ;
    }
}
void AddTaskWindow::on_savebutton_clicked(){
    QString title = ui->lineEdit_Title->text();
    QString desc = ui->textEdit_description->toPlainText();
    QString priority = ui->comboBox_Priority->currentText();
    QString itsdone = "false";
    if(ui->checkBox_Itsdone->isChecked()){
        itsdone ="true";
    }
    if (title == "" || desc == ""){
        QMessageBox::warning(this,"Warning","Title or Description field is empty");
    }
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
        QList<QString> existtitles;
        QString existtitle;
        for (const QJsonObject &jsonObject : jsonObjects)  {
             existtitle = jsonObject.value("Title").toString();
             existtitles.append(existtitle);
        }
        if(!(existtitles.contains(title))){
            QMessageBox::information(this,"Added","Task successfully added");
            writeJson(title,desc,priority,itsdone);
            emit savebuttonclicked();
            close();
        }else{
            QMessageBox::warning(this,"Title","this title exists. plz pick unique title");
        }
    }
}
void AddTaskWindow::on_Cancel_clicked()
{
    close();
}
