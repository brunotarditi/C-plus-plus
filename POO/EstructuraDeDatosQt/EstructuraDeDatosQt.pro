TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        itemarticulo.cpp \
        main.cpp

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    itemarticulo.h
