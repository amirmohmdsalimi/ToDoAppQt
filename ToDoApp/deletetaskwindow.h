#ifndef DELETETASKWINDOW_H
#define DELETETASKWINDOW_H

#include <QDialog>

namespace Ui {
class DeleteTaskWindow;
}

class DeleteTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteTaskWindow(QWidget *parent = 0);
    ~DeleteTaskWindow();

private slots:
    void on_comboBox_activated(const QString &arg1);

private:
    Ui::DeleteTaskWindow *ui;
};

#endif // DELETETASKWINDOW_H
