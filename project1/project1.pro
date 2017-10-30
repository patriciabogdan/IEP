QT += core
QT -= gui

CONFIG += c++11

TARGET = project1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    bcm2835_stub.cpp \
    Pin.cpp \
    pwm-ex.cpp \
    pwm.cpp

HEADERS += \
    bcm2835.h \
    pin.h \
    pwm.h
