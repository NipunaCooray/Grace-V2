#ifndef SETUPFEELERGUAGE_H
#define SETUPFEELERGUAGE_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class SetupFeelerGuage;
}

class SetupFeelerGuage : public QDialog
{
    Q_OBJECT

public:
    explicit SetupFeelerGuage(QWidget *parent = 0);
    ~SetupFeelerGuage();

private slots:
    void on_pushButton_set_clicked();
    void run_keyboard_lineEdit();

private:
    Ui::SetupFeelerGuage *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETUPFEELERGUAGE_H
