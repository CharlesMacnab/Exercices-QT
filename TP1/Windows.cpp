
#include "Windows.h"

Windows::Windows(QWidget *parent) : QWidget(parent){
    this->setFixedSize(100,50);
    attribut->setGeometry(10,10,80,30);
    this->setWindowTitle("hello");
}

