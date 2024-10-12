QT       += core gui network widgets

INCLUDEPATH += "C:\Program Files\NVIDIA Corporation\NVSMI"
LIBS += -L"C:/Program Files/NVIDIA Corporation/NVSMI" -lnvml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += win32

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    clientwindow.cpp

HEADERS += \
    clientwindow.h

FORMS += \
    clientwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
