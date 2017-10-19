#include "setupsecondaryspeeds.h"
#include "ui_setupsecondaryspeeds.h"
#include "global.h"
#include "QMessageBox"

SetupSecondarySpeeds::SetupSecondarySpeeds(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupSecondarySpeeds)
{
    ui->setupUi(this);

    int SI = GlobalData::styleData.getSecondaryIn();
    int SO = GlobalData::styleData.getSecondaryOut();

    QString SI_Text = QString::number(SI);
    ui->lineEdit_SecondaryIn->setText(SI_Text);

    QString SO_Text = QString::number(SO);
    ui->lineEdit_SecondaryOut->setText(SO_Text);


    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_SecondaryIn ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_SecondaryOut ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
}

SetupSecondarySpeeds::~SetupSecondarySpeeds()
{
    delete ui;
}

void SetupSecondarySpeeds::on_pushButton_SetSecondarySpeeds_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString SI_Text = ui->lineEdit_SecondaryIn->text();
    int SI = SI_Text.toInt(&ok,10);
    QString SO_Text = ui->lineEdit_SecondaryOut->text();
    int SO = SO_Text.toInt(&ok,10);

    GlobalData::styleData.setSecondaryIn(SI);
    GlobalData::styleData.setSecondaryOut(SO);

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();

}

void SetupSecondarySpeeds::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
