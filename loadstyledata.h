#ifndef LOADSTYLEDATA_H
#define LOADSTYLEDATA_H

#include <QDialog>
#include "keyboard.h"

namespace Ui {
class LoadStyleData;
}

class LoadStyleData : public QDialog
{
    Q_OBJECT

public:
    explicit LoadStyleData(QWidget *parent = 0);
    ~LoadStyleData();

private slots:
    void on_btnLoadStyle_clicked();
    //connect(tableView, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onTableClicked(const QModelIndex &));

    void on_tableView_clicked(const QModelIndex &index);

    void on_btnUseValues_clicked();

    void on_btnClose_clicked();

    void run_keyboard_lineEdit();

private:
    Ui::LoadStyleData *ui;
    Keyboard *lineEditkeyboard;
};

#endif // LOADSTYLEDATA_H
