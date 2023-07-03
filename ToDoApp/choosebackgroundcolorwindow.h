#ifndef CHOOSEBACKGROUNDCOLORWINDOW_H
#define CHOOSEBACKGROUNDCOLORWINDOW_H

#include <QDialog>

namespace Ui {
class ChooseBackgroundColorWindow;
}

class ChooseBackgroundColorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseBackgroundColorWindow(QWidget *parent = 0);
    ~ChooseBackgroundColorWindow();

signals:
    void sendData(const QString& data);

private slots:
    void on_CancelbgColor_clicked();

    void on_ApplybgColor_clicked();

private:
    Ui::ChooseBackgroundColorWindow *ui;
};

#endif // CHOOSEBACKGROUNDCOLORWINDOW_H
