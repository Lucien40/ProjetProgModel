QT += core gui opengl widgets
CONFIG += c++11

win32:LIBS += -lopengl32


TARGET = ex_05_gl

LIBS += -L../general/inc/ -linc \
-L../general/src/ -lsrc \
-L../general/tst/ -ltst

PRE_TARGETDEPS += \ #../general/inc/libinc.a \
../general/src/libsrc.a \
../general/tst/libtst.a

INCLUDEPATH = ../general/inc

SOURCES += \
    main_qt_gl.cc \
    glwidget.cc \
    vue_opengl.cc

HEADERS += \
    glwidget.h \
    vertex_shader.h \
    vue_opengl.h \
    ../general/inc/Dessinable.h \
    ../general/inc/SupportADessin.h \
    ../general/inc/Pendule.h \
    ../general/inc/Ressort.h \
    ../general/inc/System.h

RESOURCES += \
    resource.qrc
