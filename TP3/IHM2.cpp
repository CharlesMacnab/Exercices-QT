//
// Created by charl on 18/03/2020.
//

#include "IHM2.h"

IHM2::IHM2() {

    this->setWindowTitle("IHM2");
    this->setMinimumSize(600,400);

    auto* layout = new QVBoxLayout;
    auto* parent = new QWidget;

    parent->setLayout(layout);
    this->setCentralWidget(parent);

    bar->setText("fils");
    layout->addWidget(bar);



    //connect(bar, SIGNAL(clicked()), this, SLOT(close()));
    connect(bar, SIGNAL(clicked()), this, SLOT(changeText()));



}

void IHM2::changeText() {
    counter++;
    bar->setText("Example");
    std::cout << bar->text().toStdString() << counter << std::endl;
}
