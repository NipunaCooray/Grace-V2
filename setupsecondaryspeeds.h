#ifndef SETUPSECONDARYSPEEDS_H
#define SETUPSECONDARYSPEEDS_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class SetupSecondarySpeeds;
}

class SetupSecondarySpeeds : public QDialog
{
    Q_OBJECT

public:
    explicit SetupSecondarySpeeds(QWidget *parent = 0);
    ~SetupSecondarySpeeds();

private slots:
    void on_pushButton_SetSecondarySpeeds_clicked();
    void run_keyboard_lineEdit();

private:
    Ui::SetupSecondarySpeeds *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETUPSECONDARYSPEEDS_H
