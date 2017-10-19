#include "setupfeelerguage.h"
#include "ui_setupfeelerguage.h"
#include "global.h"
#include "QMessageBox"

SetupFeelerGuage::SetupFeelerGuage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupFeelerGuage)
{
    ui->setupUi(this);

    int feeler_thresh = GlobalData::styleData.getFeelerGuageThreshold();
    int num_regions = GlobalData::styleData.getNumberofRegions();

    QString feeler_thresh_Text = QString::number(feeler_thresh);
    ui->lineEdit_feelerThresh->setText(feeler_thresh_Text);
    QString num_regions_Text = QString::number(num_regions);
    ui->lineEdit_numRegions->setText(num_regions_Text);

    //Setting up touch keyboard
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit_feelerThresh ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));
    connect(ui->lineEdit_numRegions ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

}

SetupFeelerGuage::~SetupFeelerGuage()
{
    delete ui;
}

void SetupFeelerGuage::on_pushButton_set_clicked()
{
    bool ok;
    //Saving data entered by user to the styleData object
    QString Feeler_Thresh_Text = ui->lineEdit_feelerThresh->text();
    int feeler_thresh = Feeler_Thresh_Text.toInt(&ok,10);

    QString Num_regions_Text = ui->lineEdit_numRegions->text();
    int num_regions = Num_regions_Text.toInt(&ok,10);

    GlobalData::styleData.setFeelerGuageThreshold(feeler_thresh);
    GlobalData::styleData.setNumberOfRegions(num_regions);


    GlobalData::styleData.display();

    QMessageBox::information(this, tr("Saved dialog"), tr("Data saved") );

    close();


}

void SetupFeelerGuage::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
