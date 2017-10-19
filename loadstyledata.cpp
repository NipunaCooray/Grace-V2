#include "loadstyledata.h"
#include "ui_loadstyledata.h"
#include "dbmanager.h"
#include "global.h"
#include "QDebug"
#include "QMessageBox"

LoadStyleData::LoadStyleData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadStyleData)
{
    ui->setupUi(this);

    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_styleNo ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
}

LoadStyleData::~LoadStyleData()
{
    delete ui;
}

void LoadStyleData::on_btnLoadStyle_clicked()
{
    QString styleNo = ui->lineEdit_styleNo->text();

    dbmanager db(GlobalData::path);
    if(db.isOpen()){
        qDebug()<<"Connected";
        //db.getStyleData(styleNo);
        ui->tableView->setModel(db.getStyleData(styleNo));


    }
}

void LoadStyleData::on_tableView_clicked(const QModelIndex &index)
{
    QString id = ui->tableView->model()->data(index).toString();

    ui->lineEdit_SelectedID->setText(id);

}

void LoadStyleData::on_btnUseValues_clicked()
{
    QString id = ui->lineEdit_SelectedID->text();

    StyleData *style = new StyleData();

    //qDebug() << id;
    dbmanager db(GlobalData::path);
    if(db.isOpen()){
        qDebug()<<"Connected";

        style = db.getStyle(id);


    }

    if(style->getID()!= 0){
        GlobalData::styleData.setID(style->getID());
        GlobalData::styleData.setStyleNo(style->getStyleNo());
        GlobalData::styleData.setSize(style->getSize());
        GlobalData::styleData.setSide(style->getSide());
        GlobalData::styleData.setColor(style->getColor());

        GlobalData::styleData.setSpeed_1(style->getSpeed_1());
        GlobalData::styleData.setSpeed_2(style->getSpeed_2());
        GlobalData::styleData.setSpeed_3(style->getSpeed_3());
        GlobalData::styleData.setSpeed_4(style->getSpeed_4());

        GlobalData::styleData.setTension_1(style->getTension_1());
        GlobalData::styleData.setTension_2(style->getTension_2());
        GlobalData::styleData.setTension_3(style->getTension_3());
        GlobalData::styleData.setTension_4(style->getTension_4());

        GlobalData::styleData.setMachineSpeed_1(style->getMachineSpeed_1());
        GlobalData::styleData.setMachineSpeed_2(style->getMachineSpeed_2());
        GlobalData::styleData.setMachineSpeed_3(style->getMachineSpeed_3());
        GlobalData::styleData.setMachineSpeed_4(style->getMachineSpeed_4());

        GlobalData::styleData.setPinchRollerTop_1(style->getPinchRollerTop_1());
        GlobalData::styleData.setPinchRollerTop_2(style->getPinchRollerTop_2());
        GlobalData::styleData.setPinchRollerTop_3(style->getPinchRollerTop_3());
        GlobalData::styleData.setPinchRollerTop_4(style->getPinchRollerTop_4());

        GlobalData::styleData.setPinchRollerBottom_1(style->getPinchRollerBottom_1());
        GlobalData::styleData.setPinchRollerBottom_2(style->getPinchRollerBottom_2());
        GlobalData::styleData.setPinchRollerBottom_3(style->getPinchRollerBottom_3());
        GlobalData::styleData.setPinchRollerBottom_4(style->getPinchRollerBottom_4());

        GlobalData::styleData.setPullerSpeed_1(style->getPullerSpeed_1());
        GlobalData::styleData.setPullerSpeed_2(style->getPullerSpeed_2());
        GlobalData::styleData.setPullerSpeed_3(style->getPullerSpeed_3());
        GlobalData::styleData.setPullerSpeed_4(style->getPullerSpeed_4());

        GlobalData::styleData.setPrimaryTopIn(style->getPrimaryTopIn());
        GlobalData::styleData.setPrimaryTopOut(style->getPrimaryTopOut());
        GlobalData::styleData.setPrimaryBottomIn(style->getPrimaryBottomIn());
        GlobalData::styleData.setPrimaryBottomOut(style->getPrimaryBottomOut());

        GlobalData::styleData.setSecondaryIn(style->getSecondaryIn());
        GlobalData::styleData.setSecondaryOut(style->getSecondaryOut());

        GlobalData::styleData.setDelay_1(style->getDelay_1());
        GlobalData::styleData.setDelay_2(style->getDelay_2());
        GlobalData::styleData.setDelay_3(style->getDelay_3());
        GlobalData::styleData.setDelay_4(style->getDelay_4());
        GlobalData::styleData.setDelay_5(style->getDelay_5());
        GlobalData::styleData.setDelay_6(style->getDelay_6());
        GlobalData::styleData.setDelay_7(style->getDelay_7());
        GlobalData::styleData.setDelay_8(style->getDelay_8());
        GlobalData::styleData.setDelay_9(style->getDelay_9());
        GlobalData::styleData.setDelay_10(style->getDelay_10());
        GlobalData::styleData.setDelay_11(style->getDelay_11());
        GlobalData::styleData.setDelay_12(style->getDelay_12());
        GlobalData::styleData.setDelay_13(style->getDelay_13());
        GlobalData::styleData.setDelay_14(style->getDelay_14());

        GlobalData::styleData.setFeelerGuageThreshold(style->getFeelerGuageThreshold());
        GlobalData::styleData.setNumberOfRegions(style->getNumberofRegions());

        GlobalData::styleData.setPullerSpeed_back_1(style->getPullerSpeed_back_1());
        GlobalData::styleData.setPullerSpeed_back_2(style->getPullerSpeed_back_2());
        GlobalData::styleData.setPullerSpeed_back_3(style->getPullerSpeed_back_3());
        GlobalData::styleData.setPullerSpeed_back_4(style->getPullerSpeed_back_4());

        GlobalData::styleData.display();

        QMessageBox::information(this, tr("Sucess"), tr("Data successfully loaded") );

        close();

    }



}

void LoadStyleData::on_btnClose_clicked()
{
    close();
}

void LoadStyleData::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}

