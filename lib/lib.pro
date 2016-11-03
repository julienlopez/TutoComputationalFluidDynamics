include(../TutoComputationalFluidDynamics.pri)

QT += core gui widgets

TARGET = TutoComputationalFluidDynamicsLib
TEMPLATE = lib

INCLUDEPATH += .

HEADERS += simpleplot.hpp

SOURCES += simpleplot.cpp