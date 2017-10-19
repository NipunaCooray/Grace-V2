#ifndef SETUPFORM_H
#define SETUPFORM_H

#include <QDialog>
#include "QDebug"
#include "keyboard.h"

namespace Ui {
class SetupForm;
}

class SetupForm : public QDialog
{
    Q_OBJECT

public:
    explicit SetupForm(QWidget *parent = 0);
    ~SetupForm();

private slots:
    void on_pushButton_clicked();

    void run_keyboard_lineEdit();


private:
    Ui::SetupForm *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETUPFORM_H
