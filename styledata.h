#ifndef STYLEDATA_H
#define STYLEDATA_H

#include <iostream>
#include <string.h>
#include <QString>
#include <QDebug>

using namespace std;


class StyleData
{
private:

    int ID;

    QString styleNo;
    QString styleValue;
    QString size;
    QString material;

    QString color;
    QString side;


    int tension_1;
    int tension_2;
    int tension_3;
    int tension_4;

    int speed_1;
    int speed_2;
    int speed_3;
    int speed_4;

    int machine_speed_1;
    int machine_speed_2;
    int machine_speed_3;
    int machine_speed_4;

    int pinch_roller_top_1;
    int pinch_roller_top_2;
    int pinch_roller_top_3;
    int pinch_roller_top_4;

    int pinch_roller_bottom_1;
    int pinch_roller_bottom_2;
    int pinch_roller_bottom_3;
    int pinch_roller_bottom_4;

    int puller_wheel_1;
    int puller_wheel_2;
    int puller_wheel_3;
    int puller_wheel_4;

    int puller_wheel_back_1;
    int puller_wheel_back_2;
    int puller_wheel_back_3;
    int puller_wheel_back_4;



    int primary_top_in;
    int primary_top_out;
    int primary_bottom_in;
    int primary_bottom_out;

    int secondary_in;
    int secondary_out;

    int delay_1=1;
    int delay_2=9;
    int delay_3=12;
    int delay_4=15;
    int delay_5;
    int delay_6;
    int delay_7;
    int delay_8;
    int delay_9;
    int delay_10;
    int delay_11;
    int delay_12;
    int delay_13;
    int delay_14;

    int num_regions;
    int feeler_thresh;

    //Module on off states
    int sewingMachine_state = 1;
    int primaryManipulator_state = 1;
    int secondaryManipulator_state = 1;
    int pinchRoller_state = 1;
    int backPuller_state = 1;
    int sidePuller_state =1;
    int curvePlatePneumatics_state =1;
    int seamFlipper_state =1;

    QString view;

public:
    StyleData();
    ~ StyleData();

    int getID();
    void setID(int ID_local);

    QString getStyleNo();
    void setStyleNo(QString styleNo_local);

    QString getStyleValue();
    void setStyleValue(QString styleValue_local);

    QString getSize();
    void setSize(QString size_local);

    QString getMaterial();
    void setMaterial(QString material_local);



    int getTension_1();
    void setTension_1(int tension_1_local);
    int getTension_2();
    void setTension_2(int tension_2_local);
    int getTension_3();
    void setTension_3(int tension_3_local);
    int getTension_4();
    void setTension_4(int tension_4_local);

    int getSpeed_1();
    void setSpeed_1(int speed_1_local);
    int getSpeed_2();
    void setSpeed_2(int speed_2_local);
    int getSpeed_3();
    void setSpeed_3(int speed_3_local);
    int getSpeed_4();
    void setSpeed_4(int speed_4_local);

    int getMachineSpeed_1();
    void setMachineSpeed_1(int machine_speed_1_local);
    int getMachineSpeed_2();
    void setMachineSpeed_2(int machine_speed_2_local);
    int getMachineSpeed_3();
    void setMachineSpeed_3(int machine_speed_3_local);
    int getMachineSpeed_4();
    void setMachineSpeed_4(int machine_speed_4_local);

    int getPinchRollerTop_1();
    void setPinchRollerTop_1(int pinchRollerTop_1_local);
    int getPinchRollerTop_2();
    void setPinchRollerTop_2(int pinchRollerTop_2_local);
    int getPinchRollerTop_3();
    void setPinchRollerTop_3(int pinchRollerTop_3_local);
    int getPinchRollerTop_4();
    void setPinchRollerTop_4(int pinchRollerTop_4_local);

    int getPinchRollerBottom_1();
    void setPinchRollerBottom_1(int pinchRollerBottom_1_local);
    int getPinchRollerBottom_2();
    void setPinchRollerBottom_2(int pinchRollerBottom_2_local);
    int getPinchRollerBottom_3();
    void setPinchRollerBottom_3(int pinchRollerBottom_3_local);
    int getPinchRollerBottom_4();
    void setPinchRollerBottom_4(int pinchRollerBottom_4_local);

    int getPullerSpeed_1();
    void setPullerSpeed_1(int puller_speed_1_local);
    int getPullerSpeed_2();
    void setPullerSpeed_2(int puller_speed_2_local);
    int getPullerSpeed_3();
    void setPullerSpeed_3(int puller_speed_3_local);
    int getPullerSpeed_4();
    void setPullerSpeed_4(int puller_speed_4_local);

    int getPullerSpeed_back_1();
    void setPullerSpeed_back_1(int puller_speed_back_1_local);
    int getPullerSpeed_back_2();
    void setPullerSpeed_back_2(int puller_speed_back_2_local);
    int getPullerSpeed_back_3();
    void setPullerSpeed_back_3(int puller_speed_back_3_local);
    int getPullerSpeed_back_4();
    void setPullerSpeed_back_4(int puller_speed_back_4_local);

    int getPrimaryTopIn();
    void setPrimaryTopIn(int primary_top_in_local);
    int getPrimaryTopOut();
    void setPrimaryTopOut(int primary_top_out_local);
    int getPrimaryBottomIn();
    void setPrimaryBottomIn(int primary_bottom_in_local);
    int getPrimaryBottomOut();
    void setPrimaryBottomOut(int primary_bottom_out_local);

    int getSecondaryIn();
    void setSecondaryIn(int secondary_in_local);

    int getSecondaryOut();
    void setSecondaryOut(int secondary_out_local);

    int getDelay_1();
    void setDelay_1(int delay_1_local);
    int getDelay_2();
    void setDelay_2(int delay_2_local);
    int getDelay_3();
    void setDelay_3(int delay_3_local);
    int getDelay_4();
    void setDelay_4(int delay_4_local);
    int getDelay_5();
    void setDelay_5(int delay_5_local);
    int getDelay_6();
    void setDelay_6(int delay_6_local);
    int getDelay_7();
    void setDelay_7(int delay_7_local);
    int getDelay_8();
    void setDelay_8(int delay_8_local);
    int getDelay_9();
    void setDelay_9(int delay_9_local);
    int getDelay_10();
    void setDelay_10(int delay_10_local);
    int getDelay_11();
    void setDelay_11(int delay_11_local);
    int getDelay_12();
    void setDelay_12(int delay_12_local);
    int getDelay_13();
    void setDelay_13(int delay_13_local);
    int getDelay_14();
    void setDelay_14(int delay_14_local);

    int convertSpeedtoModular_pinch(int speed);
    int convertSpeedtoModular_puller_front(int speed);
    int convertSpeedtoModular_puller_back(int speed);

    QString getSide();
    void setSide(QString side_local);

    QString getColor();
    void setColor(QString color_local);

    int getNumberofRegions();
    void setNumberOfRegions(int num_regions_local);

    int getFeelerGuageThreshold();
    void setFeelerGuageThreshold(int feeler_thresh_local);

    //Getters and setters for module on off setup
    int getSewingMachineState();
    void setSewingMachineState(int sewingMachine_state_local);
    int getPrimaryManipulatorState();
    void setPrimaryManipulatorState(int primaryManipulator_state_local);
    int getSecondaryManipulatorState();
    void setSecondaryManipulatorState(int secondaryManipulator_state_local);
    int getPinchRollerState();
    void setPinchRollerState(int pinchRoller_state_local);
    int getBackPullerState();
    void setBackPullerState(int backPuller_state_local);
    int getSidePullerState();
    void setSidePullerState(int sidePuller_state_local);
    int getCurvePlatePneumaticsState();
    void setCurvePlatePneumaticsState(int curvePlatePneumatics_state_local);
    int getSeamFlipperState();
    void setSeamFlipperState(int seamFlipper_state_local);


    void display();
    QString toString();


};

#endif // STYLEDATA_H
