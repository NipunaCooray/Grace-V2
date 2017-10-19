#include "setupmodules.h"
#include "ui_setupmodules.h"
#include "QDebug"
#include "global.h"
#include "QMessageBox"

SetupModules::SetupModules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupModules)
{
    ui->setupUi(this);

    int sewingMachine_state = GlobalData::styleData.getSewingMachineState();
    int primaryManipulator_state = GlobalData::styleData.getPrimaryManipulatorState();
    int secondaryManipulator_state = GlobalData::styleData.getSecondaryManipulatorState();
    int pinchRoller_state = GlobalData::styleData.getPinchRollerState();
    int backPuller_state = GlobalData::styleData.getBackPullerState();
    int sidePuller_state = GlobalData::styleData.getSidePullerState();
    int curvePlatePneumatics = GlobalData::styleData.getCurvePlatePneumaticsState();
    int seamFlipper_state = GlobalData::styleData.getSeamFlipperState();


     QString sewingMachine_state_string = getState_string(sewingMachine_state);
     ui->comboBox_sewingMachine->setCurrentText(sewingMachine_state_string);
     QString primaryManipulator_state_string = getState_string(primaryManipulator_state);
     ui->comboBox_primaryManipulator->setCurrentText(primaryManipulator_state_string);
     QString secondaryManipulator_state_string = getState_string(secondaryManipulator_state);
     ui->comboBox_secondaryManipulator->setCurrentText(secondaryManipulator_state_string);
     QString pinchRoller_state_string = getState_string(pinchRoller_state);
     ui->comboBox_pinchRoller->setCurrentText(pinchRoller_state_string);
     QString backPuller_string = getState_string(backPuller_state);
     ui->comboBox_backPuller->setCurrentText(backPuller_string);
     QString sidePuller_string = getState_string(sidePuller_state);
     ui->comboBox_sidePuller->setCurrentText(sidePuller_string);
     QString curvePlatePneumatics_string = getState_string(curvePlatePneumatics);
     ui->comboBox_curvePlatePneumatics->setCurrentText(curvePlatePneumatics_string);
     QString seamFlipper_string = getState_string(seamFlipper_state);
     ui->comboBox_seamFlipper->setCurrentText(seamFlipper_string);


}

SetupModules::~SetupModules()
{
    delete ui;
}

void SetupModules::on_pushButton_clicked()
{
    QString sewingMachine = ui->comboBox_sewingMachine->currentText();
    GlobalData::styleData.setSewingMachineState(getState(sewingMachine));

    QString primaryManipulator = ui->comboBox_primaryManipulator->currentText();
    GlobalData::styleData.setPrimaryManipulatorState(getState(primaryManipulator));

    QString secondaryManipulator = ui->comboBox_secondaryManipulator->currentText();
    GlobalData::styleData.setSecondaryManipulatorState(getState(secondaryManipulator));

    QString pinchRoller = ui->comboBox_pinchRoller->currentText();
    GlobalData::styleData.setPinchRollerState(getState(pinchRoller));

    QString backPuller = ui->comboBox_backPuller->currentText();
    GlobalData::styleData.setBackPullerState(getState(backPuller));

    QString sidePuller = ui->comboBox_sidePuller->currentText();
    GlobalData::styleData.setSidePullerState(getState(sidePuller));

    QString curvePlatePneumatics = ui->comboBox_curvePlatePneumatics->currentText();
    GlobalData::styleData.setCurvePlatePneumaticsState(getState(curvePlatePneumatics));

    QString seamFlipper = ui->comboBox_seamFlipper->currentText();
    GlobalData::styleData.setSeamFlipperState(getState(seamFlipper));

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Sucess"), tr("Data successfully set") );

    close();

}

int SetupModules:: getState(QString state)  {

   int result;

   if (state.toStdString()=="On")
      result = 1;
   else
      result = 0;

   return result;
}

QString SetupModules::getState_string(int state){
    QString state_string;

    if(state == 0){
        state_string = "Off";
    }else{
        state_string = "On";
    }

    return state_string;
}
