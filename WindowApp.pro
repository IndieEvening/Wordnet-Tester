#-------------------------------------------------
#
# Project created by QtCreator 2014-08-04T19:02:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WindowApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    expression.cpp \
    testwindow1.cpp

HEADERS  += mainwindow.hpp \
    expression.hpp \
    testwindow1.hpp

FORMS    += mainwindow.ui \
    testwindow1.ui
