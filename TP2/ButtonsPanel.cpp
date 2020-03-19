//
// Created by charl on 17/03/2020.
//

#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel() {

    Configure->setWindowTitle("Configure");
    Connect->setWindowTitle("Connect");
    Disconnect->setWindowTitle("Disconnect");

    auto* layout = new QHBoxLayout;

    layout->addWidget(Configure);
    layout->addWidget(Connect);
    layout->addWidget(Disconnect);

    this->setLayout(layout);

}








