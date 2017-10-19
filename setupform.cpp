#include "setupform.h"
#include "ui_setupform.h"
#include "global.h"
#include "QDebug"
#include <iostream>
#include "QMessageBox"
#include "mainwindow.h"


SetupForm::SetupForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupForm)
{
    ui->setupUi(this);
    int RPM_1 = GlobalData::styleData.getSpeed_1();
    int RPM_2 = GlobalData::styleData.getSpeed_2();
    int RPM_3 = GlobalData::styleData.getSpeed_3();
    int RPM_4 = GlobalData::styleData.getSpeed_4();

    int Tension_1 = GlobalData::styleData.getTension_1();
    int Tension_2 = GlobalData::styleData.getTension_2();
    int Tension_3 = GlobalData::styleData.getTension_3();
    int Tension_4 = GlobalData::styleData.getTension_4();

    QString RPM_1_Text = QString::number(RPM_1);
    ui->lineEdit_Speed1->setText(RPM_1_Text);
    QString RPM_2_Text = QString::number(RPM_2);
    ui->lineEdit_Speed2->setText(RPM_2_Text);
    QString RPM_3_Text = QString::number(RPM_3);
    ui->lineEdit_Speed3->setText(RPM_3_Text);
    QString RPM_4_Text = QString::number(RPM_4);
    ui->lineEdit_Speed4->setText(RPM_4_Text);

    QString Tension_1_Text = QString::number(Tension_1);
    ui->lineEdit_Tension1->setText(Tension_1_Text);
    QString Tension_2_Text = QString::number(Tension_2);
    ui->lineEdit_Tension2->setText(Tension_2_Text);
    QString Tension_3_Text = QString::number(Tension_3);
    ui->lineEdit_Tension3->setText(Tension_3_Text);
    QString Tension_4_Text = QString::number(Tension_4);
    ui->lineEdit_Tension4->setText(Tension_4_Text);

    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_Speed1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Speed2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Speed3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Speed4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    connect(ui->lineEdit_Tension1 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Tension2 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Tension3 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_Tension4 ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

}

SetupForm::~SetupForm()
{
    delete ui;
}

void SetupForm::on_pushButton_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString RPM_1_Text = ui->lineEdit_Speed1->text();
    int RPM_1 = RPM_1_Text.toInt(&ok,10);
    QString RPM_2_Text = ui->lineEdit_Speed2->text();
    int RPM_2 = RPM_2_Text.toInt(&ok,10);
    QString RPM_3_Text = ui->lineEdit_Speed3->text();
    int RPM_3 = RPM_3_Text.toInt(&ok,10);
    QString RPM_4_Text = ui->lineEdit_Speed4->text();
    int RPM_4 = RPM_4_Text.toInt(&ok,10);

    QString Tension_1_Text = ui->lineEdit_Tension1->text();
    int Tension_1 = Tension_1_Text.toInt(&ok,10);
    QString Tension_2_Text = ui->lineEdit_Tension2->text();
    int Tension_2 = Tension_2_Text.toInt(&ok,10);
    QString Tension_3_Text = ui->lineEdit_Tension3->text();
    int Tension_3 = Tension_3_Text.toInt(&ok,10);
    QString Tension_4_Text = ui->lineEdit_Tension4->text();
    int Tension_4 = Tension_4_Text.toInt(&ok,10);

    //Putting extraced data to the Global Object
    GlobalData::styleData.setSpeed_1(RPM_1);
    GlobalData::styleData.setSpeed_2(RPM_2);
    GlobalData::styleData.setSpeed_3(RPM_3);
    GlobalData::styleData.setSpeed_4(RPM_4);

    //Convert speed values into modular speed values using particular methods ex: pinch1 = convertPinch(RPM_1)
    //setPichRoller_1(pinch1)

    int convertedVal_pinch_1 = GlobalData::styleData.convertSpeedtoModular_pinch(RPM_1);
    int convertedVal_pinch_2 = GlobalData::styleData.convertSpeedtoModular_pinch(RPM_2);
    int convertedVal_pinch_3 = GlobalData::styleData.convertSpeedtoModular_pinch(RPM_3);
    int convertedVal_pinch_4 = GlobalData::styleData.convertSpeedtoModular_pinch(RPM_4);

    int convertedVal_puller_front_1 = GlobalData::styleData.convertSpeedtoModular_puller_front(RPM_1);
    int convertedVal_puller_front_2 = GlobalData::styleData.convertSpeedtoModular_puller_front(RPM_2);
    int convertedVal_puller_front_3 = GlobalData::styleData.convertSpeedtoModular_puller_front(RPM_3);
    int convertedVal_puller_front_4 = GlobalData::styleData.convertSpeedtoModular_puller_front(RPM_4);

    int convertedVal_puller_back_1 = GlobalData::styleData.convertSpeedtoModular_puller_back(RPM_1);
    int convertedVal_puller_back_2 = GlobalData::styleData.convertSpeedtoModular_puller_back(RPM_2);
    int convertedVal_puller_back_3 = GlobalData::styleData.convertSpeedtoModular_puller_back(RPM_3);
    int convertedVal_puller_back_4 = GlobalData::styleData.convertSpeedtoModular_puller_back(RPM_4);

//    cout<<"ConvertedVal "<<convertedVal<<endl;

    GlobalData::styleData.setMachineSpeed_1(RPM_1);
    GlobalData::styleData.setMachineSpeed_2(RPM_2);
    GlobalData::styleData.setMachineSpeed_3(RPM_3);
    GlobalData::styleData.setMachineSpeed_4(RPM_4);


    GlobalData::styleData.setPinchRollerTop_1(convertedVal_pinch_1);
    GlobalData::styleData.setPinchRollerTop_2(convertedVal_pinch_2);
    GlobalData::styleData.setPinchRollerTop_3(convertedVal_pinch_3);
    GlobalData::styleData.setPinchRollerTop_4(convertedVal_pinch_4);

    GlobalData::styleData.setPinchRollerBottom_1(convertedVal_pinch_1);
    GlobalData::styleData.setPinchRollerBottom_2(convertedVal_pinch_2);
    GlobalData::styleData.setPinchRollerBottom_3(convertedVal_pinch_3);
    GlobalData::styleData.setPinchRollerBottom_4(convertedVal_pinch_4);

    GlobalData::styleData.setPullerSpeed_1(convertedVal_puller_front_1);
    GlobalData::styleData.setPullerSpeed_2(convertedVal_puller_front_2);
    GlobalData::styleData.setPullerSpeed_3(convertedVal_puller_front_3);
    GlobalData::styleData.setPullerSpeed_4(convertedVal_puller_front_4);

    GlobalData::styleData.setPullerSpeed_back_1(convertedVal_puller_back_1);
    GlobalData::styleData.setPullerSpeed_back_2(convertedVal_puller_back_2);
    GlobalData::styleData.setPullerSpeed_back_3(convertedVal_puller_back_3);
    GlobalData::styleData.setPullerSpeed_back_4(convertedVal_puller_back_4);


    GlobalData::styleData.setTension_1(Tension_1);
    GlobalData::styleData.setTension_2(Tension_2);
    GlobalData::styleData.setTension_3(Tension_3);
    GlobalData::styleData.setTension_4(Tension_4);

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();


//    SerialReadWrite sRead;

//    QString speed1 = QString::number(GlobalData::styleData.getSpeed_1());
//    QString speed2 = QString::number(GlobalData::styleData.getSpeed_2());
//    QString speed3 = QString::number(GlobalData::styleData.getSpeed_3());
//    QString speed4 = QString::number(GlobalData::styleData.getSpeed_4());
//    QString tension1 = QString::number(GlobalData::styleData.getTension_1());
//    QString tension2 = QString::number(GlobalData::styleData.getTension_2());
//    QString tension3 = QString::number(GlobalData::styleData.getTension_3());
//    QString tension4 = QString::number(GlobalData::styleData.getTension_4());




//    QString seperator = "\t";
//    QString s1Sign = "\n";

//    //First time sending parameter values

//    sRead.writeToSerial(speed1);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(speed2);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(speed3);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(speed4);
//    sRead.writeToSerial(s1Sign);
//    sRead.writeToSerial(tension1);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(tension2);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(tension3);
//    sRead.writeToSerial(seperator);
//    sRead.writeToSerial(tension4);
//    sRead.writeToSerial(s1Sign);


}

void SetupForm::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
