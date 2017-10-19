#ifndef SETDELAYS_H
#define SETDELAYS_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class SetDelays;
}

class SetDelays : public QDialog
{
    Q_OBJECT

public:
    explicit SetDelays(QWidget *parent = 0);
    ~SetDelays();

private slots:
    void on_pushButton_clicked();
    void run_keyboard_lineEdit();

private:
    Ui::SetDelays *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETDELAYS_H
