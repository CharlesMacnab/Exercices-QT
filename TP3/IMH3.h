//
// Created by charl on 18/03/2020.
//

#ifndef QTTP3_IMH3_H
#define QTTP3_IMH3_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <iostream>
#include <QSlider>
#include <QProgressBar>



class IMH3 : public QMainWindow {
    Q_OBJECT
public :
    IMH3();
    QTextEdit* text = new QTextEdit;
    QPushButton* bar = new QPushButton;

    QProgressBar* bar1 = new QProgressBar;
    QSlider* slider = new QSlider(Qt::Horizontal);

    int compteur = 0;

public slots:
    void changeText();
    void changeAll();

};


#endif //QTTP3_IMH3_H
