#ifndef ADDTASKWINDOW_H
#define ADDTASKWINDOW_H
#include "choosebackgroundcolorwindow.h"


#include <QDialog>

namespace Ui {
class AddTaskWindow;
}

class AddTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddTaskWindow(QWidget *parent = 0);
    ~AddTaskWindow();

signals:
    void savebuttonclicked();

private slots:
    void on_savebutton_clicked();

    void on_Cancel_clicked();

public slots:
    void receiveData(const QString& data);


private:
    Ui::AddTaskWindow *ui;
    ChooseBackgroundColorWindow *bgcWindow;

};

#endif // ADDTASKWINDOW_H
