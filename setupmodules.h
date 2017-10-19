#ifndef SETUPMODULES_H
#define SETUPMODULES_H

#include <QDialog>

namespace Ui {
class SetupModules;
}

class SetupModules : public QDialog
{
    Q_OBJECT

public:
    explicit SetupModules(QWidget *parent = 0);
    ~SetupModules();

private slots:
    void on_pushButton_clicked();
    int getState(QString);
    QString getState_string(int);

private:
    Ui::SetupModules *ui;
};

#endif // SETUPMODULES_H
