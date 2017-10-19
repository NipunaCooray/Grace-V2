#ifndef SETUPMODULARSPEEDS_H
#define SETUPMODULARSPEEDS_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class setupModularSpeeds;
}

class setupModularSpeeds : public QDialog
{
    Q_OBJECT

public:
    explicit setupModularSpeeds(QWidget *parent = 0);
    ~setupModularSpeeds();

private slots:
    void on_pushButton_clicked();
    void run_keyboard_lineEdit();


private:
    Ui::setupModularSpeeds *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SETUPMODULARSPEEDS_H
