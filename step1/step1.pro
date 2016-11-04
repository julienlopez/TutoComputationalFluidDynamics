QT += core gui widgets

TARGET = Step1
TEMPLATE = app

include (../TutoComputationalFluidDynamics.pri)

LIBS += -L$$TutoComputationalFluidDynamics_BIN
LIBS += -lTutoComputationalFluidDynamicsLib

LIBS += -L$$QWT_LIB_PATH -lqwt

INCLUDEPATH += $$TutoComputationalFluidDynamics_ROOT/lib
INCLUDEPATH += $$QWT_INCLUDE_PATH

SOURCES += main.cpp \
    simulator.cpp

HEADERS += \
    simulator.hpp
