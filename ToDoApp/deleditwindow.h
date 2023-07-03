#ifndef DELEDITWINDOW_H
#define DELEDITWINDOW_H
#include "addtaskwindow.h"
#include "choosebackgroundcolorwindow.h"

#include <QDialog>

namespace Ui {
class DelEditwindow;
}

class DelEditwindow : public QDialog
{
    Q_OBJECT

public:
    explicit DelEditwindow(QWidget *parent = 0);
    void comboxitemset();
    ~DelEditwindow();
signals:
    void buttonclicked();
private slots:
    void on_TaskcomboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_DeletepushButton_clicked();

    void on_EditpushButton_clicked();


public slots:
    void receiveData(const QString& data);


private:
    Ui::DelEditwindow *ui;
    ChooseBackgroundColorWindow *bgcWindow;

};

#endif // DELEDITWINDOW_H
