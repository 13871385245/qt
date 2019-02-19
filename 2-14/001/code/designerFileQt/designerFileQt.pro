#-------------------------------------------------
#
# Project created by QtCreator 2019-02-14T10:46:46
#
#-------------------------------------------------

QT       += core gui  #添加qt模块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = designerFileQt  #Qt编译后生成可执行文件
TEMPLATE = app #编译以app模板编译


SOURCES += main.cpp\          #源文件
        desigerfileqt.cpp

HEADERS  += desigerfileqt.h    #头文件

FORMS    += desigerfileqt.ui    #界面文件
