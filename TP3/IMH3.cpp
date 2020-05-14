//
// Created by charl on 18/03/2020.
//
#include "IHM.h"
#include "IMH3.h"
#include <string>


    IMH3::IMH3() {
        this->setWindowTitle("IHM3");
        this->setMinimumSize(600, 400);

        auto *layout = new QVBoxLayout;
        auto *parent = new QWidget;

        parent->setLayout(layout);
        this->setCentralWidget(parent);

        bar->setText("fils");
        layout->addWidget(bar);

        text->setText("texte initial");
        layout->addWidget(text);

        connect(bar, SIGNAL(clicked()), this, SLOT(changeText()));
        //connect(bar, SIGNAL(clicked()), this, SLOT(changeAll()));
    }

    void IMH3::changeText() {
        compteur++;
        QString s = QString::number(compteur);
        bar->setText("Example");

        text->append("Example" + s);

    }

    void IMH3::changeAll(){
        auto* layout = new QVBoxLayout;
        auto* parent = new QWidget;
        parent->setLayout(layout);

        this->setCentralWidget(parent);

        bar1->setValue(0);


        layout->addWidget(bar);
        layout->addWidget(slider);

        connect(slider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));
}
