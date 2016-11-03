QT += core gui widgets

TARGET = Step1
TEMPLATE = app

include (../TutoComputationalFluidDynamics.pri)

#LIBS += -L$$TutoComputationalFluidDynamics_BIN
#LIBS += -lTutoComputationalFluidDynamicsLib

INCLUDEPATH += $$TutoComputationalFluidDynamics_ROOT/lib

SOURCES += main.cpp
