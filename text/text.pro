CONFIG += c++11

TARGET = textOuput

LIBS += -L../general/inc/ -linc \
-L../general/src/ -lsrc \
-L../general/tst/ -ltst

PRE_TARGETDEPS += ../general/inc/libinc.a \
../general/src/libsrc.a \
../general/tst/libtst.a

INCLUDEPATH = ../general/inc

SOURCES += \
    main_text.cc

HEADERS += \
    ../general/inc/TextViewer.h \
