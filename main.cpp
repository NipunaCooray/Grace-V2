#include "mainwindow.h"
#include <QApplication>
#include <dbmanager.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //static const QString path = "grace.db";

    MainWindow w;
    w.setFixedSize(800,400);
    //w.setStyleSheet("QMainWindow {background: 'white';}");
    w.show();

//    dbmanager db(path);
//    if(db.isOpen()){
//        qDebug()<<"Connected";
//    }



    return a.exec();
}
