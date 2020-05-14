//
// Created by charl on 18/03/2020.
//

#ifndef TP2_LABELEDTEXTFIELD_H
#define TP2_LABELEDTEXTFIELD_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QTextEdit>

class LabeledTextField : public QWidget{
    Q_OBJECT
public:
    QLabel* label = new QLabel();
    QTextEdit* edit = new QTextEdit();

    LabeledTextField();
};


#endif //TP2_LABELEDTEXTFIELD_H
