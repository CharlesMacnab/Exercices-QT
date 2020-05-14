//
// Created by charl on 12/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "SQLClientWindow.h"

SQLClientWindow :: SQLClientWindow(){

    this->setWindowTitle("SQL Client");
    this->setMinimumSize(600,400);
    auto* parent = new QWidget;
    auto* layout = new QVBoxLayout;
    parent -> setLayout(layout);
    this -> setCentralWidget(parent);
    
    layout->addWidget(button);

    layout->addWidget(notificationPanel);

    layout->addWidget(resultTable);

    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



}