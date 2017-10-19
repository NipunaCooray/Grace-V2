#-------------------------------------------------
#
# Project created by QtCreator 2017-05-22T12:54:34
#
#-------------------------------------------------

QT       += core gui serialport sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GraceUI-22052017
TEMPLATE = app

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc -lopencv_videoio


SOURCES += main.cpp\
        mainwindow.cpp \
    serialreadwrite.cpp \
    global.cpp \
    styledata.cpp \
    setupform.cpp \
    setupmodularspeeds.cpp \
    keyboard.cpp \
    setupprimaryspeeds.cpp \
    setupsecondaryspeeds.cpp \
    setdelays.cpp \
    dbmanager.cpp \
    savestyledata.cpp \
    loadstyledata.cpp \
    setupfeelerguage.cpp \
    setupmodules.cpp

HEADERS  += mainwindow.h \
    serialreadwrite.h \
    global.h \
    styledata.h \
    setupform.h \
    setupmodularspeeds.h \
    ui_keyboard.h \
    keyboard.h \
    setupprimaryspeeds.h \
    setupsecondaryspeeds.h \
    setdelays.h \
    dbmanager.h \
    savestyledata.h \
    loadstyledata.h \
    setupfeelerguage.h \
    setupmodules.h

FORMS    += mainwindow.ui \
    setupform.ui \
    setupmodularspeeds.ui \
    keyboard.ui \
    setupprimaryspeeds.ui \
    setupsecondaryspeeds.ui \
    setdelays.ui \
    savestyledata.ui \
    loadstyledata.ui \
    setupfeelerguage.ui \
    setupmodules.ui

CONFIG += c++11

RESOURCES += \
    res.qrc
