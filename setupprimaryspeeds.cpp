#include "setupprimaryspeeds.h"
#include "ui_setupprimaryspeeds.h"
#include "global.h"
#include "QMessageBox"

SetupPrimarySpeeds::SetupPrimarySpeeds(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupPrimarySpeeds)
{
    ui->setupUi(this);


    //Adding touch keyboard functions
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_PrimaryTopIn ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_PrimaryTopOut ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_PrimaryBottomIn ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_PrimaryBottomOut ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    //Showing already set values
    int PTI = GlobalData::styleData.getPrimaryTopIn();
    QString PTI_Text = QString::number(PTI);
    ui->lineEdit_PrimaryTopIn->setText(PTI_Text);

    int PTO = GlobalData::styleData.getPrimaryTopOut();
    QString PTO_Text = QString::number(PTO);
    ui->lineEdit_PrimaryTopOut->setText(PTO_Text);

    int PBI = GlobalData::styleData.getPrimaryBottomIn();
    QString PBI_Text = QString::number(PBI);
    ui->lineEdit_PrimaryBottomIn->setText(PBI_Text);

    int PBO = GlobalData::styleData.getPrimaryBottomOut();
    QString PBO_Text = QString::number(PBO);
    ui->lineEdit_PrimaryBottomOut->setText(PBO_Text);
}


SetupPrimarySpeeds::~SetupPrimarySpeeds()
{
    delete ui;
}

void SetupPrimarySpeeds::on_pushButton_SetPrimarySpeeds_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString PTI_Text = ui->lineEdit_PrimaryTopIn->text();
    int PTI = PTI_Text.toInt(&ok,10);
    QString PTO_Text = ui->lineEdit_PrimaryTopOut->text();
    int PTO = PTO_Text.toInt(&ok,10);
    QString PBI_Text = ui->lineEdit_PrimaryBottomIn->text();
    int PBI = PBI_Text.toInt(&ok,10);
    QString PBO_Text = ui->lineEdit_PrimaryBottomOut->text();
    int PBO = PBO_Text.toInt(&ok,10);

    GlobalData::styleData.setPrimaryTopIn(PTI);
    GlobalData::styleData.setPrimaryTopOut(PTO);
    GlobalData::styleData.setPrimaryBottomIn(PBI);
    GlobalData::styleData.setPrimaryBottomOut(PBO);

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();


}

void SetupPrimarySpeeds::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
