//
// Created by charl on 18/03/2020.
//

#ifndef QTTP3_IHM2_H
#define QTTP3_IHM2_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <iostream>
#include <QDebug>

class IHM2 : public QMainWindow {
    Q_OBJECT

public :
    IHM2();
    QPushButton* bar = new QPushButton;
    int counter = 0;


public slots:
    void changeText();

};


#endif //QTTP3_IHM2_H
