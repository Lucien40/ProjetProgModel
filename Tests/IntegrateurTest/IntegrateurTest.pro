CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

win32:LIBS += -lopengl32

INCLUDEPATH = ../../general/inc
LIBS += -L../../general/inc/ -linc \
-L../../general/src/ -lsrc \
-L../../general/tst/ -ltst

PRE_TARGETDEPS += \ #../general/inc/libinc.a \
../../general/src/libsrc.a \
../../general/tst/libtst.a

HEADERS += \
    ../../general/inc/TextViewer.h

TARGET = IntegrateurTest

SOURCES += \
        main.cpp
