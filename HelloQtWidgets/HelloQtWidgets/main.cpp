#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //MainWindow w;
    //w.show();
    //QLabel *label = new QLabel("<h2><i>Hello</i>"""
    //                           "<font color=red> Qt!</font></h2>");
    //label->show();
    //delete label;
    //QPushButton *button = new QPushButton("Quit");
    //QObject::connect(button, SIGNAL(clicked()),
    //                 &app, SLOT(quit()));
    //button->show();
    QWidget * window = new QWidget;
    window->setWindowTitle("Enter Your Age");

    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinBox->setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));
    spinBox->setValue(35);
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window->setLayout(layout);
    window->show();
    return app.exec();
}
