#-------------------------------------------------
#
# Project created by QtCreator 2017-06-16T10:30:10
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SeverinoTools
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    principal.cpp \
    planodecontas.cpp \
    cadastroempresa.cpp \
    cadastrofilial.cpp \
    bancodedados.cpp \
    eventos.cpp \
    controledao.cpp \
    pesquisar.cpp \
    planosaude.cpp \
    ecoclinicrepasses.cpp \
    guiainssfolha.cpp \
    cadastrocolaborador.cpp \
    relacaocolaborador.cpp

HEADERS += \
    principal.h \
    planodecontas.h \
    cadastroempresa.h \
    cadastrofilial.h \
    bancodedados.h \
    eventos.h \
    controledao.h \
    pesquisar.h \
    planosaude.h \
    ecoclinicrepasses.h \
    guiainssfolha.h \
    cadastrocolaborador.h \
    relacaocolaborador.h

FORMS += \
    principal.ui \
    planodecontas.ui \
    pesquisar.ui \
    planosaude.ui \
    guiainssfolha.ui \
    relacaocolaborador.ui

RESOURCES += \
    thema.qrc

