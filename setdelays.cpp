#include "setdelays.h"
#include "ui_setdelays.h"
#include "global.h"
#include "QMessageBox"

SetDelays::SetDelays(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetDelays)
{
    ui->setupUi(this);
    int D1 = GlobalData::styleData.getDelay_1();
    int D2 = GlobalData::styleData.getDelay_2();
    int D3 = GlobalData::styleData.getDelay_3();
    int D4 = GlobalData::styleData.getDelay_4();
    int D5 = GlobalData::styleData.getDelay_5();
    int D6 = GlobalData::styleData.getDelay_6();
    int D7 = GlobalData::styleData.getDelay_7();
    int D8 = GlobalData::styleData.getDelay_8();
    int D9 = GlobalData::styleData.getDelay_9();
    int D10 = GlobalData::styleData.getDelay_10();
    int D11 = GlobalData::styleData.getDelay_11();
    int D12 = GlobalData::styleData.getDelay_12();
    int D13 = GlobalData::styleData.getDelay_13();
    int D14 = GlobalData::styleData.getDelay_14();

    QString D_1_Text = QString::number(D1);
    ui->lineEdit_d1->setText(D_1_Text);
    QString D_2_Text = QString::number(D2);
    ui->lineEdit_d2->setText(D_2_Text);
    QString D_3_Text = QString::number(D3);
    ui->lineEdit_d3->setText(D_3_Text);
    QString D_4_Text = QString::number(D4);
    ui->lineEdit_d4->setText(D_4_Text);
    QString D_5_Text = QString::number(D5);
    ui->lineEdit_d5->setText(D_5_Text);
    QString D_6_Text = QString::number(D6);
    ui->lineEdit_d6->setText(D_6_Text);
    QString D_7_Text = QString::number(D7);
    ui->lineEdit_d7->setText(D_7_Text);
    QString D_8_Text = QString::number(D8);
    ui->lineEdit_d8->setText(D_8_Text);
    QString D_9_Text = QString::number(D9);
    ui->lineEdit_d9->setText(D_9_Text);
    QString D_10_Text = QString::number(D10);
    ui->lineEdit_d10->setText(D_10_Text);
    QString D_11_Text = QString::number(D11);
    ui->lineEdit_d11->setText(D_11_Text);
    QString D_12_Text = QString::number(D12);
    ui->lineEdit_d12->setText(D_12_Text);
    QString D_13_Text = QString::number(D13);
    ui->lineEdit_d13->setText(D_13_Text);
    QString D_14_Text = QString::number(D14);
    ui->lineEdit_d14->setText(D_14_Text);

    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_d1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d5 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d6 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d7 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d8 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d9 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d10 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d11 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d12 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d13 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_d14 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

}

SetDelays::~SetDelays()
{
    delete ui;
}

void SetDelays::on_pushButton_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString Delay_1_Text = ui->lineEdit_d1->text();
    int D_1 = Delay_1_Text.toInt(&ok,10);
    QString Delay_2_Text = ui->lineEdit_d2->text();
    int D_2 = Delay_2_Text.toInt(&ok,10);
    QString Delay_3_Text = ui->lineEdit_d3->text();
    int D_3 = Delay_3_Text.toInt(&ok,10);
    QString Delay_4_Text = ui->lineEdit_d4->text();
    int D_4 = Delay_4_Text.toInt(&ok,10);
    QString Delay_5_Text = ui->lineEdit_d5->text();
    int D_5 = Delay_5_Text.toInt(&ok,10);
    QString Delay_6_Text = ui->lineEdit_d6->text();
    int D_6 = Delay_6_Text.toInt(&ok,10);
    QString Delay_7_Text = ui->lineEdit_d7->text();
    int D_7 = Delay_7_Text.toInt(&ok,10);
    QString Delay_8_Text = ui->lineEdit_d8->text();
    int D_8 = Delay_8_Text.toInt(&ok,10);
    QString Delay_9_Text = ui->lineEdit_d9->text();
    int D_9 = Delay_9_Text.toInt(&ok,10);
    QString Delay_10_Text = ui->lineEdit_d10->text();
    int D_10 = Delay_10_Text.toInt(&ok,10);
    QString Delay_11_Text = ui->lineEdit_d11->text();
    int D_11 = Delay_11_Text.toInt(&ok,10);
    QString Delay_12_Text = ui->lineEdit_d12->text();
    int D_12 = Delay_12_Text.toInt(&ok,10);
    QString Delay_13_Text = ui->lineEdit_d13->text();
    int D_13 = Delay_13_Text.toInt(&ok,10);
    QString Delay_14_Text = ui->lineEdit_d14->text();
    int D_14 = Delay_14_Text.toInt(&ok,10);

    //Putting extraced data to the Global Object
    GlobalData::styleData.setDelay_1(D_1);
    GlobalData::styleData.setDelay_2(D_2);
    GlobalData::styleData.setDelay_3(D_3);
    GlobalData::styleData.setDelay_4(D_4);
    GlobalData::styleData.setDelay_5(D_5);
    GlobalData::styleData.setDelay_6(D_6);
    GlobalData::styleData.setDelay_7(D_7);
    GlobalData::styleData.setDelay_8(D_8);
    GlobalData::styleData.setDelay_9(D_9);
    GlobalData::styleData.setDelay_10(D_10);
    GlobalData::styleData.setDelay_11(D_11);
    GlobalData::styleData.setDelay_12(D_12);
    GlobalData::styleData.setDelay_13(D_13);
    GlobalData::styleData.setDelay_14(D_14);


    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();

}

void SetDelays::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
