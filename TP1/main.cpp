
#include <QApplication>
#include <QPushButton>
#include "Windows.h"

int main(int argc, char **argv) {
    //-----------------------EXO 1------------------------
    QApplication app (argc, argv);
    QPushButton button ("Hello world !");
    button.setText("Yohann");
    button.setToolTip("hi");
    QFont font ("Courier", 100,87,true);
    button.setFont(font);
    //button.show();
    //-----------------------EXO 2------------------------
    QPushButton parents ("Parent !");
    QPushButton fils ("Fils",&parents);
    //parents.show();
    //-----------------------EXO 3------------------------
    QWidget yo;
    yo.setFixedSize(100,50);
    QPushButton son ("Fils",&yo);
    son.setGeometry(10,10,80,30);
    //yo.show();
    //-----------------------EXO 4------------------------
    Windows *test = new Windows;
    test->show();

    return app.exec();
}
