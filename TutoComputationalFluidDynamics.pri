TutoComputationalFluidDynamics_ROOT = $$PWD

TutoComputationalFluidDynamics_BIN = $$TutoComputationalFluidDynamics_ROOT/bin

TutoComputationalFluidDynamics_OBJ_LIB = $$TutoComputationalFluidDynamics_ROOT/obj_lib

TutoComputationalFluidDynamics_MOC_LIB = $$TutoComputationalFluidDynamics_ROOT/moc_lib

TutoComputationalFluidDynamics_SRC = $$TutoComputationalFluidDynamics_ROOT/src

DESTDIR = $$TutoComputationalFluidDynamics_BIN

CONFIG += c++14

include(boost.pri)
include(qwt.pri)

# QMAKE_CXXFLAGS += -std=c++11
# -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align -Wwrite-strings -Wmissing-declarations -Wredundant-decls -Winline -Wno-long-long -Wuninitialized -Wconversion
