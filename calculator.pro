#-------------------------------------------------
#
# Project created by QtCreator 2015-07-01T18:05:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        calculator.cpp \
    parser.cpp \
    task.cpp

HEADERS  += calculator.h \
    parser.h \
    task.h

FORMS    += calculator.ui
