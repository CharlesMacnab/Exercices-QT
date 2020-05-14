//
// Created by charl on 18/03/2020.
//

#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(){

    auto* layout = new QHBoxLayout;

    layout->addWidget(label);
    layout->addWidget(edit);

    edit->setMaximumHeight(200);

}