include(../TutoComputationalFluidDynamics.pri)

QT += core gui widgets

TEMPLATE = lib
CONFIG += staticlib
TARGET = TutoComputationalFluidDynamicsLib

include (../TutoComputationalFluidDynamics.pri)

INCLUDEPATH += .
INCLUDEPATH += $$QWT_INCLUDE_PATH

LIBS += -L$$QWT_LIB_PATH -lqwt

HEADERS += simpleplot.hpp \
    isimulator.hpp

SOURCES += simpleplot.cpp \
    isimulator.cpp
