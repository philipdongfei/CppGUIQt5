qt5 uic

qmake   -project       // 生成 gotocell.pro 文件
qmake   gotocell.pro   // 生成 makefile 文件
uic  gotocelldialog.ui  -o ui_gotocelldialog.h

修改添加XXX.h XXX.cpp代码

 Step1: .pro (in pro file, add these 2 lines)

    QT       += core gui
    greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

Step2: main.cpp

#include <QtWidgets/QApplication>
替换
#include <QApplication>



mingw32-make