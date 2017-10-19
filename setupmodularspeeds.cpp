#include "setupmodularspeeds.h"
#include "ui_setupmodularspeeds.h"
#include "global.h"
#include "QMessageBox"

setupModularSpeeds::setupModularSpeeds(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setupModularSpeeds)
{

//    ui->lineEdit_pinch_top_1->setText("5");


    ui->setupUi(this);

    //Loading data to line edits from the data sturucture

    int MS_1 = GlobalData::styleData.getMachineSpeed_1();
    int MS_2 = GlobalData::styleData.getMachineSpeed_2();
    int MS_3 = GlobalData::styleData.getMachineSpeed_3();
    int MS_4 = GlobalData::styleData.getMachineSpeed_4();

    int PRT_1 = GlobalData::styleData.getPinchRollerTop_1();
    int PRT_2 = GlobalData::styleData.getPinchRollerTop_2();
    int PRT_3 = GlobalData::styleData.getPinchRollerTop_3();
    int PRT_4 = GlobalData::styleData.getPinchRollerTop_4();

    int PRB_1 = GlobalData::styleData.getPinchRollerBottom_1();
    int PRB_2 = GlobalData::styleData.getPinchRollerBottom_2();
    int PRB_3 = GlobalData::styleData.getPinchRollerBottom_3();
    int PRB_4 = GlobalData::styleData.getPinchRollerBottom_4();

    int puller_1 = GlobalData::styleData.getPullerSpeed_1();
    int puller_2 = GlobalData::styleData.getPullerSpeed_2();
    int puller_3 = GlobalData::styleData.getPullerSpeed_3();
    int puller_4 = GlobalData::styleData.getPullerSpeed_4();

    int puller_back_1 = GlobalData::styleData.getPullerSpeed_back_1();
    int puller_back_2 = GlobalData::styleData.getPullerSpeed_back_2();
    int puller_back_3 = GlobalData::styleData.getPullerSpeed_back_3();
    int puller_back_4 = GlobalData::styleData.getPullerSpeed_back_4();

    //ui->lcdNumber->display(foldWidth);

    QString MS1_Text = QString::number(MS_1);
    ui->lineEdit_machine_1->setText(MS1_Text);
    QString MS2_Text = QString::number(MS_2);
    ui->lineEdit_machine_2->setText(MS2_Text);
    QString MS3_Text = QString::number(MS_3);
    ui->lineEdit_machine_3->setText(MS3_Text);
    QString MS4_Text = QString::number(MS_4);
    ui->lineEdit_machine_4->setText(MS4_Text);

    QString PRT_1_Text = QString::number(PRT_1);
    ui->lineEdit_pinch_top_1->setText(PRT_1_Text);
    QString PRT_2_Text = QString::number(PRT_2);
    ui->lineEdit_pinch_top_2->setText(PRT_2_Text);
    QString PRT_3_Text = QString::number(PRT_3);
    ui->lineEdit_pinch_top_3->setText(PRT_3_Text);
    QString PRT_4_Text = QString::number(PRT_4);
    ui->lineEdit_pinch_top_4->setText(PRT_4_Text);

    QString PRB_1_Text = QString::number(PRB_1);
    ui->lineEdit_pinch_bottom_1->setText(PRB_1_Text);
    QString PRB_2_Text = QString::number(PRB_2);
    ui->lineEdit_pinch_bottom_2->setText(PRB_2_Text);
    QString PRB_3_Text = QString::number(PRB_3);
    ui->lineEdit_pinch_bottom_3->setText(PRB_3_Text);
    QString PRB_4_Text = QString::number(PRB_4);
    ui->lineEdit_pinch_bottom_4->setText(PRB_4_Text);

    QString Puller_1_Text = QString::number(puller_1);
    ui->lineEdit_puller_1->setText(Puller_1_Text);
    QString Puller_2_Text = QString::number(puller_2);
    ui->lineEdit_puller_2->setText(Puller_2_Text);
    QString Puller_3_Text = QString::number(puller_3);
    ui->lineEdit_puller_3->setText(Puller_3_Text);
    QString Puller_4_Text = QString::number(puller_4);
    ui->lineEdit_puller_4->setText(Puller_4_Text);

    QString Puller_back_1_Text = QString::number(puller_back_1);
    ui->lineEdit_back_puller_1->setText(Puller_back_1_Text);
    QString Puller_back_2_Text = QString::number(puller_back_2);
    ui->lineEdit_back_puller_2->setText(Puller_back_2_Text);
    QString Puller_back_3_Text = QString::number(puller_back_3);
    ui->lineEdit_back_puller_3->setText(Puller_back_3_Text);
    QString Puller_back_4_Text = QString::number(puller_back_4);
    ui->lineEdit_back_puller_4->setText(Puller_back_4_Text);


    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_machine_1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_machine_2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_machine_3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_machine_4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    connect(ui->lineEdit_pinch_top_1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_top_2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_top_3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_top_4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    connect(ui->lineEdit_pinch_bottom_1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_bottom_2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_bottom_3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_pinch_bottom_4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    connect(ui->lineEdit_puller_1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_puller_2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_puller_3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_puller_4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    connect(ui->lineEdit_back_puller_1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_back_puller_2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_back_puller_3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_back_puller_4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));



}

setupModularSpeeds::~setupModularSpeeds()
{
    delete ui;
}

void setupModularSpeeds::on_pushButton_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString MS_1_Text = ui->lineEdit_machine_1->text();
    int MS_1 = MS_1_Text.toInt(&ok,10);
    QString MS_2_Text = ui->lineEdit_machine_2->text();
    int MS_2 = MS_2_Text.toInt(&ok,10);
    QString MS_3_Text = ui->lineEdit_machine_3->text();
    int MS_3 = MS_3_Text.toInt(&ok,10);
    QString MS_4_Text = ui->lineEdit_machine_4->text();
    int MS_4 = MS_4_Text.toInt(&ok,10);

    QString PRT_1_Text = ui->lineEdit_pinch_top_1->text();
    int PRT_1 = PRT_1_Text.toInt(&ok,10);
    QString PRT_2_Text = ui->lineEdit_pinch_top_2->text();
    int PRT_2 = PRT_2_Text.toInt(&ok,10);
    QString PRT_3_Text = ui->lineEdit_pinch_top_3->text();
    int PRT_3 = PRT_3_Text.toInt(&ok,10);
    QString PRT_4_Text = ui->lineEdit_pinch_top_4->text();
    int PRT_4 = PRT_4_Text.toInt(&ok,10);

    QString PRB_1_Text = ui->lineEdit_pinch_bottom_1->text();
    int PRB_1 = PRB_1_Text.toInt(&ok,10);
    QString PRB_2_Text = ui->lineEdit_pinch_bottom_2->text();
    int PRB_2 = PRB_2_Text.toInt(&ok,10);
    QString PRB_3_Text = ui->lineEdit_pinch_bottom_3->text();
    int PRB_3 = PRB_3_Text.toInt(&ok,10);
    QString PRB_4_Text = ui->lineEdit_pinch_bottom_4->text();
    int PRB_4 = PRB_4_Text.toInt(&ok,10);

    QString puller_1_Text = ui->lineEdit_puller_1->text();
    int puller_1 = puller_1_Text.toInt(&ok,10);
    QString puller_2_Text = ui->lineEdit_puller_2->text();
    int puller_2 = puller_2_Text.toInt(&ok,10);
    QString puller_3_Text = ui->lineEdit_puller_3->text();
    int puller_3 = puller_3_Text.toInt(&ok,10);
    QString puller_4_Text = ui->lineEdit_puller_4->text();
    int puller_4 = puller_4_Text.toInt(&ok,10);

    QString puller_1_back_Text = ui->lineEdit_back_puller_1->text();
    int puller_back_1 = puller_1_back_Text.toInt(&ok,10);
    QString puller_2_back_Text = ui->lineEdit_back_puller_2->text();
    int puller_back_2 = puller_2_back_Text.toInt(&ok,10);
    QString puller_3_back_Text = ui->lineEdit_back_puller_3->text();
    int puller_back_3 = puller_3_back_Text.toInt(&ok,10);
    QString puller_4_back_Text = ui->lineEdit_back_puller_4->text();
    int puller_back_4 = puller_4_back_Text.toInt(&ok,10);



    //Putting extraced data to the Global Object
    GlobalData::styleData.setMachineSpeed_1(MS_1);
    GlobalData::styleData.setMachineSpeed_2(MS_2);
    GlobalData::styleData.setMachineSpeed_3(MS_3);
    GlobalData::styleData.setMachineSpeed_4(MS_4);

    GlobalData::styleData.setPinchRollerTop_1(PRT_1);
    GlobalData::styleData.setPinchRollerTop_2(PRT_2);
    GlobalData::styleData.setPinchRollerTop_3(PRT_3);
    GlobalData::styleData.setPinchRollerTop_4(PRT_4);

    GlobalData::styleData.setPinchRollerBottom_1(PRB_1);
    GlobalData::styleData.setPinchRollerBottom_2(PRB_2);
    GlobalData::styleData.setPinchRollerBottom_3(PRB_3);
    GlobalData::styleData.setPinchRollerBottom_4(PRB_4);

    GlobalData::styleData.setPullerSpeed_1(puller_1);
    GlobalData::styleData.setPullerSpeed_2(puller_2);
    GlobalData::styleData.setPullerSpeed_3(puller_3);
    GlobalData::styleData.setPullerSpeed_4(puller_4);

    GlobalData::styleData.setPullerSpeed_back_1(puller_back_1);
    GlobalData::styleData.setPullerSpeed_back_2(puller_back_2);
    GlobalData::styleData.setPullerSpeed_back_3(puller_back_3);
    GlobalData::styleData.setPullerSpeed_back_4(puller_back_4);

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();
}

void setupModularSpeeds::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
