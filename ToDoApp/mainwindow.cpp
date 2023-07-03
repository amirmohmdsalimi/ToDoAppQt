#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtaskwindow.h"
#include "deleditwindow.h"
#include "choosebackgroundcolorwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include <QMap>
#include <QDebug>
#include <QStandardItemModel>
#include <QTextTableCell>
#include <QTextCharFormat>
#include <QStyledItemDelegate>
#include <QTableView>
#include <addtaskwindow.h>
#include <QDateTime>
#include <QPainter>
#include <QApplication>
#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <QMessageBox>
#include <QColor>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bgcWindow = new ChooseBackgroundColorWindow;
    deleditwindow = new DelEditwindow;
    addtaskwindow = new AddTaskWindow;
    connect(bgcWindow, &ChooseBackgroundColorWindow::sendData, this, &MainWindow::receiveData, Qt::QueuedConnection);
    connect(bgcWindow, &ChooseBackgroundColorWindow::sendData, deleditwindow, &DelEditwindow::receiveData, Qt::QueuedConnection);
    connect(bgcWindow, &ChooseBackgroundColorWindow::sendData, addtaskwindow, &AddTaskWindow::receiveData, Qt::QueuedConnection);
    connect(addtaskwindow, &AddTaskWindow::savebuttonclicked,this, &MainWindow::buttonclicked);
    connect(deleditwindow, &DelEditwindow::buttonclicked,this,&MainWindow::buttonclicked);





    ui->ReloadButton->click();

}

MainWindow::~MainWindow()
{
    delete ui;
}


//class SeparatorDelegate : public QStyledItemDelegate {
//    Q_OBJECT

//public:
//    explicit SeparatorDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

//    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
//        QString data = index.data().toString();
//        if (data == "----- Separator -----") {
//            QStyleOptionViewItem newOption(option);
//            newOption.rect.setLeft(0);
//            newOption.rect.setWidth(option.widget->width());
//            QStyledItemDelegate::paint(painter, newOption, index);
//        } else {
//            QStyledItemDelegate::paint(painter, option, index);
//        }
//    }
//};

void MainWindow::receiveData(const QString& data) {
    setStyleSheet("background-color: "+data+";");
}
void MainWindow::buttonclicked(){
    ui->ReloadButton->click();
}


//bool DateSortingProxyModel::lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const {
//    QString leftDateString = sourceModel()->data(source_left).toString();
//    QString rightDateString = sourceModel()->data(source_right).toString();

//    QDateTime leftDate = QDateTime::fromString(leftDateString, "dd.MM.yyyy");
//    QDateTime rightDate = QDateTime::fromString(rightDateString, "dd.MM.yyyy");

//    return leftDate < rightDate;
//}
//bool PrioritySortingProxyModel::lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const {
//    QString leftPriority = sourceModel()->data(source_left).toString();
//    QString rightPriority = sourceModel()->data(source_right).toString();

//    // Define the priority order
//    QMap<QString, int> priorityOrder;
//    priorityOrder["High"] = 1;
//    priorityOrder["Average"] = 2;
//    priorityOrder["Low"] = 3;

//    return priorityOrder[leftPriority] < priorityOrder[rightPriority];
//}

//bool CombinedSortingProxyModel::lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const {
//    // Compare priority values
//    QString leftPriority = sourceModel()->data(source_left.sibling(source_left.row(), m_priorityColumn)).toString();
//    QString rightPriority = sourceModel()->data(source_right.sibling(source_right.row(), m_priorityColumn)).toString();

//    QMap<QString, int> priorityOrder;
//    priorityOrder["High"] = 1;
//    priorityOrder["Average"] = 2;
//    priorityOrder["Low"] = 3;

//    if (priorityOrder[leftPriority] != priorityOrder[rightPriority]) {
//        return priorityOrder[leftPriority] < priorityOrder[rightPriority];
//    }

//    // If priority values are equal, compare date values
//    QString leftDateString = sourceModel()->data(source_left.sibling(source_left.row(), m_dateColumn)).toString();
//    QString rightDateString = sourceModel()->data(source_right.sibling(source_right.row(), m_dateColumn)).toString();

//    QDateTime leftDate = QDateTime::fromString(leftDateString, "dd.MM.yyyy");
//    QDateTime rightDate = QDateTime::fromString(rightDateString, "dd.MM.yyyy");

//    return leftDate < rightDate;
//}


// a function to add row in tableview


//void appendRowToModel(QStandardItemModel *model, const QStringList &rowData, const QColor &rowColor) {
//    QList<QStandardItem *> items;
//    for (const QString &text : rowData) {
//        QStandardItem *item = new QStandardItem(text);
//        item->setData(rowColor, Qt::BackgroundRole);
//        items.append(item);
//    }
//    model->appendRow(items);
//}
//
//void MainWindow::separatePriorities() {
//    int priorityColumn = 2; // Assuming the priority value is in column 1
//    QString prevPriority;
//    int rowCount = tableModel->rowCount();

//    for (int row = 0; row < rowCount; ++row) {
//        QModelIndex index = tableModel->index(row, priorityColumn);
//        QString currentPriority = tableModel->data(index).toString();

//        if ((!prevPriority.isEmpty()) &&
//            ((prevPriority == "High" && currentPriority == "Average") ||
//             (prevPriority == "Average" && currentPriority == "Low"))) {
//            // Insert a new row with a separator
//            tableModel->insertRow(row);
//            tableModel->setData(tableModel->index(row, 0), "----- Separator -----");
//            tableModel->mergeCells(row, 0, 1, tableModel->columnCount());
//            rowCount++; // Update the row count as we've added a new row
//            row++; // Move to the next row after the separator
//        }

//        prevPriority = currentPriority;
//    }
//}

bool sortJsonObjects(const QJsonObject &a, const QJsonObject &b) {
    QString adone = a["ItsDone"].toString();
    QString bdone = b["ItsDone"].toString();
    bool a_is_done = false;
    bool b_is_done = false;
    if (adone == "true"){
        a_is_done = true;
    }
    if (bdone == "true"){
        b_is_done = true;
    }
    if(a_is_done != b_is_done){
        return a_is_done < b_is_done;
    }

    QMap<QString, int> priorityOrder;
    priorityOrder["High"] = 1;
    priorityOrder["Average"] = 2;
    priorityOrder["Low"] = 3;

    QString aPriority = a["Priority"].toString();
    QString bPriority = b["Priority"].toString();

    if (priorityOrder[aPriority] != priorityOrder[bPriority]) {
        return priorityOrder[aPriority] < priorityOrder[bPriority];
    }

    QDateTime aDate = QDateTime::fromString(a["Time"].toString(), "dd.MM.yyyy");
    QDateTime bDate = QDateTime::fromString(b["Time"].toString(), "dd.MM.yyyy");

    return bDate < aDate;
}

void MainWindow::on_actionBackGroundColor_triggered()
{

    bgcWindow->show();
}


void MainWindow::on_AddButton_clicked()
{
    QMessageBox::information(this,"Title","Titles must be Unique. Be careful.");
    addtaskwindow->show();
}

void MainWindow::on_ReloadButton_clicked()
{
    QString executablePath = QCoreApplication::applicationDirPath();
    QFile file(executablePath + "/JsonFile.json");
    if (!file.exists()) {
            if (file.open(QIODevice::WriteOnly)) {
                QJsonObject jsonObject;
                QJsonDocument jsonDoc(jsonObject);
                file.write(jsonDoc.toJson());
                file.close();
            } else {
                qDebug() << "Failed to create the JSON file";
            }
        }
    QString json_string;
    if (file.open(QIODevice::ReadOnly)) {
        json_string = file.readAll();
        file.close();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(json_string.toUtf8());
        QJsonArray jarray = jsonDoc.array();

        // Clear the existing content of the QTextEdit and create a new QTextCursor for it
        ui->textEdit->clear();
        QTextCursor cursor(ui->textEdit->document());

        // Create a QTextTableFormat to define the appearance of the table
        QTextTableFormat tableFormat;
        tableFormat.setCellPadding(5);
        tableFormat.setHeaderRowCount(1);
        tableFormat.setBorder(1);
        tableFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Solid);

        // Create the QTextTable using the QTextCursor and QTextTableFormat
        int numRows = jarray.count();
        int numCols = 5; // The number of columns in your table
        QTextTable *table = cursor.insertTable(numRows + 1, numCols, tableFormat);

        // Add header row data
        QStringList headerLabels = QStringList() << "Title" << "Description" << "Priority" << "Time" << "ItsDone";
        for (const QString &headerText : headerLabels) {
            cursor.insertText(headerText);
            cursor.movePosition(QTextCursor::NextCell);
        }

        // Add row data
        QList<QJsonObject> sortedJsonObjects;
        for (const QJsonValue &value : jarray) {
            if (value.isObject()) {
                sortedJsonObjects.append(value.toObject());
            }
        }
        std::sort(sortedJsonObjects.begin(), sortedJsonObjects.end(), sortJsonObjects);
        for (const QJsonObject &jsonObject : sortedJsonObjects)  {



            QString title = jsonObject.value("Title").toString();
            QString description = jsonObject.value("Description").toString();
            QString priority = jsonObject.value("Priority").toString();
            QString time = jsonObject.value("Time").toString();
            QString itsDone = jsonObject.value("ItsDone").toString();

            QStringList rowData;
            rowData << title << description << priority << time << itsDone;

            QColor rowColor;
            if (priority == "High") {
                rowColor = Qt::red;
            } else if (priority == "Average") {
                rowColor = Qt::yellow;
            } else if (priority == "Low") {
                rowColor = Qt::white;
            }

            for (const QString &cellText : rowData) {
                cursor.insertText(cellText);

                // Set the cell background color based on the priority value
                QTextTableCell cell = table->cellAt(cursor.position());
                QTextCharFormat cellFormat = cell.format();
                cellFormat.setBackground(rowColor);
                cell.setFormat(cellFormat);

                cursor.movePosition(QTextCursor::NextCell);
            }

        }
//        int tablerows = table->rows();
//        int currentrow;
//        int prioritycolumn = 2;
//        for(currentrow = 0;currentrow<tablerows;++currentrow){
//            QTextTableCell prioritycell = table->cellAt(currentrow, prioritycolumn);
//            QTextCursor prioritycellCursor = prioritycell.firstCursorPosition();
//            QString prioritycellText = prioritycellCursor.selectedText();
//            qDebug() <<prioritycellText;
//        }


        int tablerows = table->rows();
        int tablecolumns = table->columns();
        int currentrow;
        int prioritycolumn = 2;
        int itsdonecolumn = 4;
        QString defualtitsdone = "false";
        QTextCursor itsdonecellCursor_begin;
        QTextCursor itsdonecellCursor_end;
        QString previouspriority;
        QString currentPriority;
        QTextCursor prioritycellCursor;
        for (currentrow = 1; currentrow < tablerows; ++currentrow) {
            QTextTableCell itsdonecell = table->cellAt(currentrow, itsdonecolumn);
            itsdonecellCursor_begin = itsdonecell.firstCursorPosition();
            itsdonecellCursor_end = itsdonecell.lastCursorPosition();
            itsdonecellCursor_begin.setPosition(itsdonecellCursor_end.position(), QTextCursor::KeepAnchor);
            QString itsdonecelltext = itsdonecellCursor_begin.selectedText();
            //
            QTextTableCell prioritycell = table->cellAt(currentrow, prioritycolumn);
            prioritycellCursor = prioritycell.firstCursorPosition();

            // Select the content of the cell
            QTextCursor cellEndCursor = prioritycell.lastCursorPosition();
            prioritycellCursor.setPosition(cellEndCursor.position(), QTextCursor::KeepAnchor);

            QString prioritycellText = prioritycellCursor.selectedText();
            currentPriority = prioritycellText;
            if(previouspriority.isEmpty()){
                previouspriority = currentPriority;
            }

            if(!previouspriority.isEmpty() && previouspriority != currentPriority){

                table->insertRows(currentrow, 1);
                tablerows++; // Update the row count
                if(defualtitsdone == itsdonecelltext){
                    for (int currentcolumn = 0; currentcolumn < tablecolumns; ++currentcolumn) {
                        QTextTableCell newCell = table->cellAt(currentrow, currentcolumn);
                        QTextCharFormat cellformat = newCell.format();

                        QTextCursor cellCursor = newCell.firstCursorPosition();
                        QString customContent = QString("").arg(currentcolumn+1);
                        cellCursor.insertText(customContent);
                        cellformat.setBackground(Qt::darkGray);
                        newCell.setFormat(cellformat);
                    }

                }else{
                    for (int currentcolumn = 0; currentcolumn < tablecolumns; ++currentcolumn) {
                        QTextTableCell newCell = table->cellAt(currentrow, currentcolumn);
                        QTextCharFormat cellformat = newCell.format();
                        QTextCursor cellCursor = newCell.firstCursorPosition();
                        QString customContent = QString("").arg(currentcolumn+1);
                        cellCursor.insertText(customContent);
                        cellformat.setBackground(Qt::black);
                        newCell.setFormat(cellformat);
                    }
                    defualtitsdone = itsdonecelltext;

                }

                previouspriority = currentPriority;
            }
        }

    } else {
        qDebug() << "Error opening file for reading" << file.errorString();
    }
}


void MainWindow::on_DeleteEditButton_clicked()
{
//    DelEditwindow newDelEdit;
//    newDelEdit.setModal(true);
//    newDelEdit.exec();
    deleditwindow->comboxitemset();

    deleditwindow->show();
}
