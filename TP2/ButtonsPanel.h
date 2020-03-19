//
// Created by charl on 17/03/2020.
//

#ifndef TP2_BUTTONSPANEL_H
#define TP2_BUTTONSPANEL_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QHBoxLayout>

class ButtonsPanel : public QWidget {
    Q_OBJECT
public:
    QPushButton* Configure = new QPushButton("Configure", this);
    QPushButton* Connect = new QPushButton("Connect", this);
    QPushButton* Disconnect = new QPushButton("Disconnect", this);

    ButtonsPanel();

};


#endif //TP2_BUTTONSPANEL_H
