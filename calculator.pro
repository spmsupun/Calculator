#-------------------------------------------------
#
# Project created by QtCreator 2015-06-28T19:26:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = calculator
TEMPLATE = app


SOURCES += main.cpp\
        calculator.cpp \
    task.cpp \
    formula.cpp

HEADERS  += calculator.h \
    task.h \
    formula.h

FORMS    += calculator.ui
