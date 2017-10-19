#include "dbmanager.h"
#include "QSqlQuery"
#include "QDebug"
#include "QSqlError"
#include "QFile"

dbmanager::dbmanager(const QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

dbmanager::~dbmanager()
{
    if (m_db.isOpen())
    {
        m_db.close();
    }
}

bool dbmanager::isOpen() const
{
    return m_db.isOpen();
}

bool dbmanager::addStyle(StyleData styleData){
    bool success = false;

    if(QFile::exists("grace")) {
        qDebug() <<"File exist";
    }

    if(!styleData.getStyleNo().isEmpty()){

        //qDebug() <<"Inside if";
        qDebug() << styleData.getStyleNo();

        QSqlQuery query;

        //QString sql = "INSERT INTO style(styleNo) values('"+styleData.getStyleNo()+"')";
        query.prepare("INSERT INTO style(styleNo,size,side,color,tension_1,tension_2,tension_3,tension_4,speed_1,speed_2,speed_3,speed_4,ms_1,ms_2,ms_3,ms_4,prt_1,prt_2,prt_3,prt_4,prb_1,prb_2,prb_3,prb_4,puller_1,puller_2,puller_3,puller_4,pti,pto,pbi,pbo,si,so,d1,d2,d3,d4,d5,d6,d7,d8,feeler_thresh,num_regions,puller_back_1,puller_back_2,puller_back_3,puller_back_4,d9,d10,d11,d12,d13,d14)"
" values(:styleNo,:size,:side,:color,:tension_1,:tension_2,:tension_3,:tension_4,:speed_1,:speed_2,:speed_3,:speed_4,:ms_1,:ms_2,:ms_3,:ms_4,:prt_1,:prt_2,:prt_3,:prt_4,:prb_1,:prb_2,:prb_3,:prb_4,:puller_1,:puller_2,:puller_3,:puller_4,:pti,:pto,:pbi,:pbo,:si,:so,:d1,:d2,:d3,:d4,:d5,:d6,:d7,:d8,:feeler_thresh,:num_regions,:puller_back_1,:puller_back_2,:puller_back_3,:puller_back_4,:d9,:d10,:d11,:d12,:d13,:d14)");
        query.bindValue(":styleNo", styleData.getStyleNo());
        query.bindValue(":size", styleData.getSize());
        query.bindValue(":side", styleData.getSide());
        query.bindValue(":color", styleData.getColor());
        query.bindValue(":tension_1", styleData.getTension_1());
        query.bindValue(":tension_2", styleData.getTension_2());
        query.bindValue(":tension_3", styleData.getTension_3());
        query.bindValue(":tension_4", styleData.getTension_4());
        query.bindValue(":speed_1", styleData.getSpeed_1());
        query.bindValue(":speed_2", styleData.getSpeed_2());
        query.bindValue(":speed_3", styleData.getSpeed_3());
        query.bindValue(":speed_4", styleData.getSpeed_4());
        query.bindValue(":ms_1", styleData.getMachineSpeed_1());
        query.bindValue(":ms_2", styleData.getMachineSpeed_2());
        query.bindValue(":ms_3", styleData.getMachineSpeed_3());
        query.bindValue(":ms_4", styleData.getMachineSpeed_4());
        query.bindValue(":prt_1", styleData.getPinchRollerTop_1());
        query.bindValue(":prt_2", styleData.getPinchRollerTop_2());
        query.bindValue(":prt_3", styleData.getPinchRollerTop_3());
        query.bindValue(":prt_4", styleData.getPinchRollerTop_4());
        query.bindValue(":prb_1", styleData.getPinchRollerBottom_1());
        query.bindValue(":prb_2", styleData.getPinchRollerBottom_2());
        query.bindValue(":prb_3", styleData.getPinchRollerBottom_3());
        query.bindValue(":prb_4", styleData.getPinchRollerBottom_4());
        query.bindValue(":puller_1", styleData.getPullerSpeed_1());
        query.bindValue(":puller_2", styleData.getPullerSpeed_2());
        query.bindValue(":puller_3", styleData.getPullerSpeed_3());
        query.bindValue(":puller_4", styleData.getPullerSpeed_4());
        query.bindValue(":pti", styleData.getPrimaryTopIn());
        query.bindValue(":pto", styleData.getPrimaryTopOut());
        query.bindValue(":pbi", styleData.getPrimaryBottomIn());
        query.bindValue(":pbo", styleData.getPrimaryBottomOut());
        query.bindValue(":si", styleData.getSecondaryIn());
        query.bindValue(":so", styleData.getSecondaryOut());
        query.bindValue(":d1", styleData.getDelay_1());
        query.bindValue(":d2", styleData.getDelay_2());
        query.bindValue(":d3", styleData.getDelay_3());
        query.bindValue(":d4", styleData.getDelay_4());
        query.bindValue(":d5", styleData.getDelay_5());
        query.bindValue(":d6", styleData.getDelay_6());
        query.bindValue(":d7", styleData.getDelay_7());
        query.bindValue(":d8", styleData.getDelay_8());
        query.bindValue(":feeler_thresh", styleData.getFeelerGuageThreshold());
        query.bindValue(":num_regions", styleData.getNumberofRegions());
        query.bindValue(":puller_back_1",styleData.getPullerSpeed_back_1());
        query.bindValue(":puller_back_2",styleData.getPullerSpeed_back_2());
        query.bindValue(":puller_back_3",styleData.getPullerSpeed_back_3());
        query.bindValue(":puller_back_4",styleData.getPullerSpeed_back_4());
        query.bindValue(":d9",styleData.getDelay_9());
        query.bindValue(":d10",styleData.getDelay_10());
        query.bindValue(":d11",styleData.getDelay_11());
        query.bindValue(":d12",styleData.getDelay_12());
        query.bindValue(":d13",styleData.getDelay_13());
        query.bindValue(":d14",styleData.getDelay_14());



        if(query.exec()){
                success = true;
                qDebug() << "Successfully saved " ;
        }
        else{
            qDebug() << "add style failed: " <<query.lastError();
        }
    }else{
        qDebug() << "Null style number";
    }

    return success;
}

QSqlQueryModel * dbmanager::getStyleData(QString styleNo){

    //Passing the QSqlQueryModel to GUI to show data in a table

    QSqlQueryModel *model;
    model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT * from style WHERE styleNo = (:styleNo)");
    qry.bindValue(":styleNo",styleNo);

    if(qry.exec()){
        model->setQuery(qry);
    }

    return model;
}

StyleData * dbmanager::getStyle(QString ID){
    StyleData *style = new StyleData();
    QSqlQuery qry;
    qry.prepare("SELECT * from style WHERE ID = (:ID)");
    qry.bindValue(":ID",ID);

    if(qry.exec()){
        while(qry.next()){
            style->setID(qry.value(0).toInt());
            style->setStyleNo(qry.value(1).toString());
            style->setSize(qry.value(2).toString());
            style->setSide(qry.value(3).toString());
            style->setColor(qry.value(4).toString());

            style->setTension_1(qry.value(5).toInt());
            style->setTension_2(qry.value(6).toInt());
            style->setTension_3(qry.value(7).toInt());
            style->setTension_4(qry.value(8).toInt());

            style->setSpeed_1(qry.value(9).toInt());
            style->setSpeed_2(qry.value(10).toInt());
            style->setSpeed_3(qry.value(11).toInt());
            style->setSpeed_4(qry.value(12).toInt());

            style->setMachineSpeed_1(qry.value(13).toInt());
            style->setMachineSpeed_2(qry.value(14).toInt());
            style->setMachineSpeed_3(qry.value(15).toInt());
            style->setMachineSpeed_4(qry.value(16).toInt());

            style->setPinchRollerTop_1(qry.value(17).toInt());
            style->setPinchRollerTop_2(qry.value(18).toInt());
            style->setPinchRollerTop_3(qry.value(19).toInt());
            style->setPinchRollerTop_4(qry.value(20).toInt());

            style->setPinchRollerBottom_1(qry.value(21).toInt());
            style->setPinchRollerBottom_2(qry.value(22).toInt());
            style->setPinchRollerBottom_3(qry.value(23).toInt());
            style->setPinchRollerBottom_4(qry.value(24).toInt());

            style->setPullerSpeed_1(qry.value(25).toInt());
            style->setPullerSpeed_2(qry.value(26).toInt());
            style->setPullerSpeed_3(qry.value(27).toInt());
            style->setPullerSpeed_4(qry.value(28).toInt());

            style->setPrimaryTopIn(qry.value(29).toInt());
            style->setPrimaryTopOut(qry.value(30).toInt());
            style->setPrimaryBottomIn(qry.value(31).toInt());
            style->setPrimaryBottomOut(qry.value(32).toInt());

            style->setSecondaryIn(qry.value(33).toInt());
            style->setSecondaryOut(qry.value(34).toInt());

            style->setDelay_1(qry.value(35).toInt());
            style->setDelay_2(qry.value(36).toInt());
            style->setDelay_3(qry.value(37).toInt());
            style->setDelay_4(qry.value(38).toInt());
            style->setDelay_5(qry.value(39).toInt());
            style->setDelay_6(qry.value(40).toInt());
            style->setDelay_7(qry.value(41).toInt());
            style->setDelay_8(qry.value(42).toInt());

            style->setFeelerGuageThreshold(qry.value(43).toInt());
            style->setNumberOfRegions(qry.value(44).toInt());

            style->setPullerSpeed_back_1(qry.value(45).toInt());
            style->setPullerSpeed_back_2(qry.value(46).toInt());
            style->setPullerSpeed_back_3(qry.value(47).toInt());
            style->setPullerSpeed_back_4(qry.value(48).toInt());

            style->setDelay_9(qry.value(49).toInt());
            style->setDelay_10(qry.value(50).toInt());
            style->setDelay_11(qry.value(51).toInt());
            style->setDelay_12(qry.value(52).toInt());
            style->setDelay_13(qry.value(53).toInt());
            style->setDelay_14(qry.value(54).toInt());



        }
    }



    return style;
}



