#include "mainwindow.h"

#include <QApplication>
#include "finddialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    FindDialog *dialog = new FindDialog;
    dialog->show();
    return a.exec();
}
