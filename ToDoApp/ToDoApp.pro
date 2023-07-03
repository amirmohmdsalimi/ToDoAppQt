#-------------------------------------------------
#
# Project created by QtCreator 2023-06-30T18:13:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ToDoApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addtaskwindow.cpp \
    choosebackgroundcolorwindow.cpp \
    deleditwindow.cpp

HEADERS  += mainwindow.h \
    addtaskwindow.h \
    choosebackgroundcolorwindow.h \
    deleditwindow.h

FORMS    += mainwindow.ui \
    addtaskwindow.ui \
    choosebackgroundcolorwindow.ui \
    deleditwindow.ui

RESOURCES +=
