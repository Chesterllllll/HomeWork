#-------------------------------------------------
#
# Project created by QtCreator 2019-04-09T13:58:06
#
#-------------------------------------------------

QT       += core gui remoteobjects

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = word_elemination
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        forms/initialform.cpp \
    auth.cpp \
    user.cpp \
    challenge.cpp \
    common.cpp \
    localconnect.cpp \
    serverconnect.cpp \
    forms/userhomeform.cpp \
    forms/addwordform.cpp \
    forms/playform.cpp \
    forms/listusersform.cpp

HEADERS += \
        forms/initialform.h \
    auth.h \
    user.h \
    challenge.h \
    common.h \
    localconnect.h \
    serverconnect.h \
    forms/userhomeform.h \
    forms/addwordform.h \
    forms/playform.h \
    forms/listusersform.h

FORMS += \
        forms/initialform.ui \
    forms/userhomeform.ui \
    forms/addwordform.ui \
    forms/playform.ui \
    forms/listusersform.ui
include(QtAwesome/QtAwesome.pri)
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
