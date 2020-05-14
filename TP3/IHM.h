//
// Created by charl on 18/03/2020.
//

#ifndef QTTP3_IHM_H
#define QTTP3_IHM_H

#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QVBoxLayout>
#include <QWidget>

class IHM : public QMainWindow{

    Q_OBJECT

public:
    IHM();

    QProgressBar* bar = new QProgressBar;
    QSlider* slider = new QSlider(Qt::Horizontal);


};


#endif //QTTP3_IHM_H
