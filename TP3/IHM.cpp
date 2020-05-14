//
// Created by charl on 18/03/2020.
//

#include "IHM.h"

IHM::IHM(){

    this->setWindowTitle("IHM");
    this->setMinimumSize(600,400);



    auto* layout = new QVBoxLayout;
    auto* parent = new QWidget;
    parent->setLayout(layout);

    this->setCentralWidget(parent);

    bar->setValue(0);


    layout->addWidget(bar);
    layout->addWidget(slider);

    connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));


}



