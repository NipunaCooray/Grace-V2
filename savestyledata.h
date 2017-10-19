#ifndef SAVESTYLEDATA_H
#define SAVESTYLEDATA_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class SaveStyleData;
}

class SaveStyleData : public QDialog
{
    Q_OBJECT

public:
    explicit SaveStyleData(QWidget *parent = 0);
    ~SaveStyleData();

private slots:
    void on_pushButton_setValues_clicked();

    void on_pushButton_viewLegend_2_clicked();

    void on_pushButton_SaveToDB_clicked();

    void run_keyboard_lineEdit();

private:
    Ui::SaveStyleData *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SAVESTYLEDATA_H
