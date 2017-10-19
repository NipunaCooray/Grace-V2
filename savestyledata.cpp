#include "savestyledata.h"
#include "ui_savestyledata.h"
#include "global.h"
#include "QMessageBox"
#include "dbmanager.h"


SaveStyleData::SaveStyleData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveStyleData)
{
    ui->setupUi(this);
    int s1 = GlobalData::styleData.getSpeed_1();
    int s2 = GlobalData::styleData.getSpeed_2();
    int s3 = GlobalData::styleData.getSpeed_3();
    int s4 = GlobalData::styleData.getSpeed_4();

    int t1 = GlobalData::styleData.getTension_1();
    int t2 = GlobalData::styleData.getTension_2();
    int t3 = GlobalData::styleData.getTension_3();
    int t4 = GlobalData::styleData.getTension_4();

    int ms1 = GlobalData::styleData.getMachineSpeed_1();
    int ms2 = GlobalData::styleData.getMachineSpeed_2();
    int ms3 = GlobalData::styleData.getMachineSpeed_3();
    int ms4 = GlobalData::styleData.getMachineSpeed_4();

    int prt1 = GlobalData::styleData.getPinchRollerTop_1();
    int prt2 = GlobalData::styleData.getPinchRollerTop_2();
    int prt3 = GlobalData::styleData.getPinchRollerTop_3();
    int prt4 = GlobalData::styleData.getPinchRollerTop_4();

    int prb1 = GlobalData::styleData.getPinchRollerBottom_1();
    int prb2 = GlobalData::styleData.getPinchRollerBottom_2();
    int prb3 = GlobalData::styleData.getPinchRollerBottom_3();
    int prb4 = GlobalData::styleData.getPinchRollerBottom_4();

    int puller1 = GlobalData::styleData.getPullerSpeed_1();
    int puller2 = GlobalData::styleData.getPullerSpeed_2();
    int puller3 = GlobalData::styleData.getPullerSpeed_3();
    int puller4 = GlobalData::styleData.getPullerSpeed_4();

    int pti = GlobalData::styleData.getPrimaryTopIn();
    int pto = GlobalData::styleData.getPrimaryTopOut();
    int pbi = GlobalData::styleData.getPrimaryBottomIn();
    int pbo = GlobalData::styleData.getPrimaryBottomOut();

    int si = GlobalData::styleData.getSecondaryIn();
    int so = GlobalData::styleData.getSecondaryOut();

    int d1 = GlobalData::styleData.getDelay_1();
    int d2 = GlobalData::styleData.getDelay_2();
    int d3 = GlobalData::styleData.getDelay_3();
    int d4 = GlobalData::styleData.getDelay_4();
    int d5 = GlobalData::styleData.getDelay_5();
    int d6 = GlobalData::styleData.getDelay_6();
    int d7 = GlobalData::styleData.getDelay_7();
    int d8 = GlobalData::styleData.getDelay_8();
    int d9 = GlobalData::styleData.getDelay_9();
    int d10 = GlobalData::styleData.getDelay_10();
    int d11 = GlobalData::styleData.getDelay_11();
    int d12 = GlobalData::styleData.getDelay_12();

    QString styleNo = GlobalData::styleData.getStyleNo();
    QString size = GlobalData::styleData.getSize();
    QString color = GlobalData::styleData.getColor();
    QString side = GlobalData::styleData.getSide();

    int feeler_thresh = GlobalData::styleData.getFeelerGuageThreshold();
    int num_regions = GlobalData::styleData.getNumberofRegions();


    int puller_back_1 = GlobalData::styleData.getPullerSpeed_back_1();
    int puller_back_2 =GlobalData::styleData.getPullerSpeed_back_2();
    int puller_back_3 = GlobalData::styleData.getPullerSpeed_back_3();
    int puller_back_4 = GlobalData::styleData.getPullerSpeed_back_4();




    QString S_1_Text = QString::number(s1);
    ui->label_s1->setText(S_1_Text);
    QString S_2_Text = QString::number(s2);
    ui->label_s2->setText(S_2_Text);
    QString S_3_Text = QString::number(s3);
    ui->label_s3->setText(S_3_Text);
    QString S_4_Text = QString::number(s4);
    ui->label_s4->setText(S_4_Text);
    QString T_1_Text = QString::number(t1);
    ui->label_t1->setText(T_1_Text);
    QString T_2_Text = QString::number(t2);
    ui->label_t2->setText(T_2_Text);
    QString T_3_Text = QString::number(t3);
    ui->label_t3->setText(T_3_Text);
    QString T_4_Text = QString::number(t4);
    ui->label_t4->setText(T_4_Text);
    QString ms_1_Text = QString::number(ms1);
    ui->label_ms1->setText(ms_1_Text);
    QString ms_2_Text = QString::number(ms2);
    ui->label_ms2->setText(ms_2_Text);
    QString ms_3_Text = QString::number(ms3);
    ui->label_ms3->setText(ms_3_Text);
    QString ms_4_Text = QString::number(ms4);
    ui->label_ms4->setText(ms_4_Text);

    QString prt1_Text = QString::number(prt1);
    ui->label_prt1->setText(prt1_Text);
    QString prt2_Text = QString::number(prt2);
    ui->label_prt2->setText(prt2_Text);
    QString prt3_Text = QString::number(prt3);
    ui->label_prt3->setText(prt3_Text);
    QString prt4_Text = QString::number(prt4);
    ui->label_prt4->setText(prt4_Text);

    QString prb1_Text = QString::number(prb1);
    ui->label_prb1->setText(prb1_Text);
    QString prb2_Text = QString::number(prb2);
    ui->label_prb2->setText(prb2_Text);
    QString prb3_Text = QString::number(prb3);
    ui->label_prb3->setText(prb3_Text);
    QString prb4_Text = QString::number(prb4);
    ui->label_prb4->setText(prb4_Text);

    QString puller1_Text = QString::number(puller1);
    ui->label_puller1->setText(puller1_Text);
    QString puller2_Text = QString::number(puller2);
    ui->label_puller2->setText(puller2_Text);
    QString puller3_Text = QString::number(puller3);
    ui->label_puller3->setText(puller3_Text);
    QString puller4_Text = QString::number(puller4);
    ui->label_puller4->setText(puller4_Text);

    QString pti_Text = QString::number(pti);
    ui->label_pti->setText(pti_Text);
    QString pto_Text = QString::number(pto);
    ui->label_pto->setText(pto_Text);
    QString pbi_Text = QString::number(pbi);
    ui->label_pbi->setText(pbi_Text);
    QString pbo_Text = QString::number(pbo);
    ui->label_pbo->setText(pbo_Text);

    QString si_Text = QString::number(si);
    ui->label_si->setText(si_Text);
    QString so_Text = QString::number(so);
    ui->label_so->setText(so_Text);

    QString d1_Text = QString::number(d1);
    ui->label_d1->setText(d1_Text);
    QString d2_Text = QString::number(d2);
    ui->label_d2->setText(d2_Text);
    QString d3_Text = QString::number(d3);
    ui->label_d3->setText(d3_Text);
    QString d4_Text = QString::number(d4);
    ui->label_d4->setText(d4_Text);
    QString d5_Text = QString::number(d5);
    ui->label_d5->setText(d5_Text);
    QString d6_Text = QString::number(d6);
    ui->label_d6->setText(d6_Text);
    QString d7_Text = QString::number(d7);
    ui->label_d7->setText(d7_Text);
    QString d8_Text = QString::number(d8);
    ui->label_d8->setText(d8_Text);
    QString d9_Text = QString::number(d9);
    ui->label_d9->setText(d9_Text);
    QString d10_Text = QString::number(d10);
    ui->label_d10->setText(d10_Text);
    QString d11_Text = QString::number(d11);
    ui->label_d11->setText(d11_Text);
    QString d12_Text = QString::number(d12);
    ui->label_d12->setText(d12_Text);

    QString feeler_thresh_text = QString::number(feeler_thresh);
    ui->label_FeelerThresh->setText(feeler_thresh_text);
    QString num_regions_text = QString::number(num_regions);
    ui->label_num_regions->setText(num_regions_text);

    ui->lineEdit_styleNo->setText(styleNo);
    //ui->lineEdit_size->setText(size);
    ui->lineEdit_color->setText(color);
    //ui->lineEdit_side->setText(side);
    ui->comboBox_size->setCurrentText(size);
    ui->comboBox_side->setCurrentText(side);

    QString puller_back_1_Text = QString::number(puller_back_1);
    ui->label_puller_back_1->setText(puller_back_1_Text);
    QString puller_back_2_Text = QString::number(puller_back_2);
    ui->label_puller_back_2->setText(puller_back_2_Text);
    QString puller_back_3_Text = QString::number(puller_back_3);
    ui->label_puller_back_3->setText(puller_back_3_Text);
    QString puller_back_4_Text = QString::number(puller_back_4);
    ui->label_puller_back_4->setText(puller_back_4_Text);

    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_styleNo ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_color ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));


}

SaveStyleData::~SaveStyleData()
{
    delete ui;
}

void SaveStyleData::on_pushButton_setValues_clicked()
{
    //bool ok;
    //Saving data entered by user to the styleData object
    QString styleNo = ui->lineEdit_styleNo->text();
    //QString size = ui->lineEdit_size->text();
    QString color = ui->lineEdit_color->text();
    //QString side = ui->lineEdit_side->text();

    QString size = ui->comboBox_size->currentText();
    QString side = ui->comboBox_side->currentText();

    //Putting extraced data to the Global Object
    GlobalData::styleData.setStyleNo(styleNo);
    GlobalData::styleData.setSize(size);
    GlobalData::styleData.setColor(color);
    GlobalData::styleData.setSide(side);

    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Style values set") );


}

void SaveStyleData::on_pushButton_viewLegend_2_clicked()
{
    close();
}

void SaveStyleData::on_pushButton_SaveToDB_clicked()
{
    dbmanager db(GlobalData::path);

     bool success = false;

    if(db.isOpen()){
        qDebug()<<"Connected";
        success = db.addStyle(GlobalData::styleData);

    }

    if(success){
        QMessageBox::information(this, tr("Saved dialog"), tr("Data successfully saved to DB") );
        close();
    }else{
        QMessageBox::information(this, tr("Saved dialog"), tr("Data saving failed") );
    }



}

void SaveStyleData::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
