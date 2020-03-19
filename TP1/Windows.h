//
// Created by charl on 13/02/2020.
//

#ifndef TP1_WINDOWS_H
#define TP1_WINDOWS_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>

class Windows : public QWidget {
    Q_OBJECT
public:
    Windows(QWidget* parent=0);
    QPushButton* attribut = new QPushButton("Hello", this);
};

#endif //TP1_WINDOWS_H
