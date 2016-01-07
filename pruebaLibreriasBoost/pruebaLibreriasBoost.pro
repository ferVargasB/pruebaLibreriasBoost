#-------------------------------------------------
#
# Project created by QtCreator 2016-01-06T18:31:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pruebaLibreriasBoost
TEMPLATE = app

INCLUDEPATH += /Users/fernandovargas/include
LIBS += -L/Users/fernandovargas/lib -libboost_regex-gcc34-mt-d-1_36.a

SOURCES += main.cpp\
        aplicacion.cpp

HEADERS  += aplicacion.h

FORMS    += aplicacion.ui
