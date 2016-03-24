#-------------------------------------------------
#
# Project created by QtCreator 2015-12-29T23:26:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MusicWorld
TEMPLATE = app


SOURCES += main.cpp\
        musicwindow.cpp \
    addmusic.cpp \
    dialog.cpp

HEADERS  += musicwindow.h \
    addmusic.h \
    dialog.h

FORMS    += musicwindow.ui \
    addmusic.ui \
    dialog.ui

RESOURCES += \
    resource.qrc
