#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "choosebackgroundcolorwindow.h"
#include "addtaskwindow.h"
#include "deleditwindow.h"

#include <QMainWindow>
#include <QSortFilterProxyModel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void readjson(QShowEvent *event);

private slots:

    void on_actionBackGroundColor_triggered();

    void on_AddButton_clicked();

    void on_ReloadButton_clicked();

    void on_DeleteEditButton_clicked();

public slots:
    void receiveData(const QString& data);
    void buttonclicked();

private:
    Ui::MainWindow *ui;
    ChooseBackgroundColorWindow *bgcWindow;
    DelEditwindow *deleditwindow;
    AddTaskWindow *addtaskwindow;
    void separatePriorities();

};

class CombinedSortingProxyModel : public QSortFilterProxyModel {
    Q_OBJECT

public:
//    CombinedSortingProxyModel(int priorityColumn, int dateColumn, QObject* parent = nullptr)
//        : QSortFilterProxyModel(parent), m_priorityColumn(priorityColumn), m_dateColumn(dateColumn) {}

protected:
//    bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override;

private:
    int m_priorityColumn;
    int m_dateColumn;
};

#endif // MAINWINDOW_H
