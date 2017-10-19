#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setupform.h"
#include "serialreadwrite.h"
#include "global.h"
#include "setupmodularspeeds.h"
#include "QMessageBox"
#include "setupprimaryspeeds.h"
#include "setupsecondaryspeeds.h"
#include "setdelays.h"
#include "savestyledata.h"
#include "loadstyledata.h"
#include "setupfeelerguage.h"
#include "setupmodules.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



//    ui->pushButton_5->setStyleSheet("background-color: #0D7406 ");


//    ui->pushButton->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_2->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_3->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_4->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_6->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_7->setStyleSheet("background-color: #645F5E   ");

//    ui->pushButton_9->setStyleSheet("background-color: #645F5E   ");
//    ui->pushButton_btnLoadStyle->setStyleSheet("background-color: #645F5E   ");




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    SetupForm *setupForm = new SetupForm(this);
    setupForm->setModal(false);
    setupForm->setFixedSize(450,300);
    //w.setStyleSheet("QMainWindow {background: 'white';}");
    //setupForm->setStyleSheet("background-color:#5F5956;");
    setupForm->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    setupModularSpeeds *setupModularForm = new setupModularSpeeds(this);
    setupModularForm->setModal(false);
    setupModularForm->setFixedSize(500,300);
    setupModularForm->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    SerialReadWrite sRead;


    QString speed1 = QString::number(GlobalData::styleData.getSpeed_1());
    QString speed2 = QString::number(GlobalData::styleData.getSpeed_2());
    QString speed3 = QString::number(GlobalData::styleData.getSpeed_3());
    QString speed4 = QString::number(GlobalData::styleData.getSpeed_4());
    QString tension1 = QString::number(GlobalData::styleData.getTension_1());
    QString tension2 = QString::number(GlobalData::styleData.getTension_2());
    QString tension3 = QString::number(GlobalData::styleData.getTension_3());
    QString tension4 = QString::number(GlobalData::styleData.getTension_4());

    QString machineSpeed1 = QString::number(GlobalData::styleData.getMachineSpeed_1());
    QString machineSpeed2 = QString::number(GlobalData::styleData.getMachineSpeed_2());
    QString machineSpeed3 = QString::number(GlobalData::styleData.getMachineSpeed_3());
    QString machineSpeed4 = QString::number(GlobalData::styleData.getMachineSpeed_4());


    QString PRT_1 = QString::number(GlobalData::styleData.getPinchRollerTop_1());
    QString PRT_2 = QString::number(GlobalData::styleData.getPinchRollerTop_2());
    QString PRT_3 = QString::number(GlobalData::styleData.getPinchRollerTop_3());
    QString PRT_4 = QString::number(GlobalData::styleData.getPinchRollerTop_4());

    QString PRB_1 = QString::number(GlobalData::styleData.getPinchRollerBottom_1());
    QString PRB_2 = QString::number(GlobalData::styleData.getPinchRollerBottom_2());
    QString PRB_3 = QString::number(GlobalData::styleData.getPinchRollerBottom_3());
    QString PRB_4 = QString::number(GlobalData::styleData.getPinchRollerBottom_4());

    QString puller1 = QString::number(GlobalData::styleData.getPullerSpeed_1());
    QString puller2 = QString::number(GlobalData::styleData.getPullerSpeed_2());
    QString puller3 = QString::number(GlobalData::styleData.getPullerSpeed_3());
    QString puller4 = QString::number(GlobalData::styleData.getPullerSpeed_4());

    QString puller_back_1 = QString::number(GlobalData::styleData.getPullerSpeed_back_1());
    QString puller_back_2 = QString::number(GlobalData::styleData.getPullerSpeed_back_2());
    QString puller_back_3 = QString::number(GlobalData::styleData.getPullerSpeed_back_3());
    QString puller_back_4 = QString::number(GlobalData::styleData.getPullerSpeed_back_4());


    QString PTI = QString::number(GlobalData::styleData.getPrimaryTopIn());
    QString PTO = QString::number(GlobalData::styleData.getPrimaryTopOut());
    QString PBI = QString::number(GlobalData::styleData.getPrimaryBottomIn());
    QString PBO = QString::number(GlobalData::styleData.getPrimaryBottomOut());

    QString SI = QString::number(GlobalData::styleData.getSecondaryIn());
    QString SO = QString::number(GlobalData::styleData.getSecondaryOut());

    QString D1 = QString::number(GlobalData::styleData.getDelay_1());
    QString D2 = QString::number(GlobalData::styleData.getDelay_2());
    QString D3 = QString::number(GlobalData::styleData.getDelay_3());
    QString D4 = QString::number(GlobalData::styleData.getDelay_4());
    QString D5 = QString::number(GlobalData::styleData.getDelay_5());
    QString D6 = QString::number(GlobalData::styleData.getDelay_6());
    QString D7 = QString::number(GlobalData::styleData.getDelay_7());
    QString D8 = QString::number(GlobalData::styleData.getDelay_8());
    QString D9 = QString::number(GlobalData::styleData.getDelay_9());
    QString D10 = QString::number(GlobalData::styleData.getDelay_10());
    QString D11 = QString::number(GlobalData::styleData.getDelay_11());
    QString D12 = QString::number(GlobalData::styleData.getDelay_12());
    QString D13 = QString::number(GlobalData::styleData.getDelay_13());
    QString D14 = QString::number(GlobalData::styleData.getDelay_14());


    QString feeler_thresh = QString::number(GlobalData::styleData.getFeelerGuageThreshold());
    QString num_regions = QString::number(GlobalData::styleData.getNumberofRegions());

    QString sewingMachine_state = QString::number(GlobalData::styleData.getSewingMachineState());
    QString primaryManipulator_state = QString::number(GlobalData::styleData.getPrimaryManipulatorState());
    QString secondaryManipulator_state = QString::number(GlobalData::styleData.getSecondaryManipulatorState());
    QString pinchRoller_state = QString::number(GlobalData::styleData.getPinchRollerState());
    QString backPuller_state = QString::number(GlobalData::styleData.getBackPullerState());
    QString sidePuller_state = QString::number(GlobalData::styleData.getSidePullerState());
    QString curvePlatePneumatics = QString::number(GlobalData::styleData.getCurvePlatePneumaticsState());
    QString seamFlipper_state = QString::number(GlobalData::styleData.getSeamFlipperState());

    qDebug()<< "Sewing machine speed ::" <<sewingMachine_state;
    qDebug()<< "Primary manipulatro state ::" <<primaryManipulator_state;
    qDebug()<< "Seam flipper state ::" <<seamFlipper_state;


    QString seperator = "\n";

    //First time sending parameter values

    sRead.writeToSerial(num_regions);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(feeler_thresh);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(speed1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(speed2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(speed3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(speed4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(tension1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(tension2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(tension3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(tension4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(machineSpeed1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(machineSpeed2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(machineSpeed3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(machineSpeed4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(PRT_1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRT_2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRT_3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRT_4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(PRB_1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRB_2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRB_3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PRB_4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(puller1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(puller_back_1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller_back_2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller_back_3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(puller_back_4);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(PTI);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PTO);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PBI);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(PBO);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(SI);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(SO);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(D1);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D2);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D3);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D4);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D5);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D6);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D7);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D8);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D9);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D10);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D11);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D12);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D13);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(D14);
    sRead.writeToSerial(seperator);

    sRead.writeToSerial(sewingMachine_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(primaryManipulator_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(secondaryManipulator_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(pinchRoller_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(backPuller_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(sidePuller_state);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(curvePlatePneumatics);
    sRead.writeToSerial(seperator);
    sRead.writeToSerial(seamFlipper_state);
    sRead.writeToSerial(seperator);




    QMessageBox::information(this, tr("Run"), tr("Data sent to the machine") );

}

void MainWindow::on_pushButton_3_clicked()
{
    SetupPrimarySpeeds *setupForm = new SetupPrimarySpeeds(this);
    setupForm->setModal(false);
    setupForm->setFixedSize(450,300);
    setupForm->show();
}

void MainWindow::on_pushButton_7_clicked()
{
    SetupSecondarySpeeds *setupForm = new SetupSecondarySpeeds(this);
    setupForm->setModal(false);
    setupForm->setFixedSize(400,255);
    setupForm->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    SetDelays *setupForm = new SetDelays(this);
    setupForm->setModal(false);
    setupForm->setFixedSize(600,300);
    setupForm->show();
}

void MainWindow::on_pushButton_9_clicked()
{
    SaveStyleData *saveForm = new SaveStyleData(this);
    saveForm->setModal(false);
    saveForm->setFixedSize(800,400);
    saveForm->show();
}

void MainWindow::on_pushButton_btnLoadStyle_clicked()
{
    LoadStyleData *loadForm = new LoadStyleData(this);
    loadForm->setModal(false);
    loadForm->setFixedSize(800,400);
    loadForm->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    SetupFeelerGuage *setFeelerGuage = new SetupFeelerGuage(this);
    setFeelerGuage->setModal(false);
    setFeelerGuage->setFixedSize(400,300);
    setFeelerGuage->show();
}

void MainWindow::on_pushButton_8_clicked()
{
    SetupModules *setModules = new SetupModules(this);
    setModules->setModal(false);
    setModules->setFixedSize(400,300);
    setModules->show();

}
