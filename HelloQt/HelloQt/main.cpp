#include <QCoreApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLabel *label = new QLabel("Hello, Qt!");
    label->show();
    return a.exec();
}
