#ifndef SETUPPRIMARYSPEEDS_H
#define SETUPPRIMARYSPEEDS_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class SetupPrimarySpeeds;
}

class SetupPrimarySpeeds : public QDialog
{
    Q_OBJECT

public:
    explicit SetupPrimarySpeeds(QWidget *parent = 0);
    ~SetupPrimarySpeeds();

private slots:
    void on_pushButton_SetPrimarySpeeds_clicked();
    void run_keyboard_lineEdit();

private:
    Ui::SetupPrimarySpeeds *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETUPPRIMARYSPEEDS_H
