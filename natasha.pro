#-------------------------------------------------
#
# Project created by QtCreator 2013-12-06T16:19:05
#
#-------------------------------------------------

QT_SELECT = qt5
QT += core gui widgets network
CONFIG += console
CONFIG += qt
CONFIG -= app_bundle

TARGET = natasha

TEMPLATE = app

SOURCES += main.cpp \
    filedownloader.cpp \
    natashareplywidget.cpp

HEADERS += \
    filedownloader.h \
    natashareplywidget.h
