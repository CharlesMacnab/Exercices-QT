//
// Created by charl on 12/03/2020.
//

#ifndef TP2_SQLCLIENTWINDOW_H
#define TP2_SQLCLIENTWINDOW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QTextEdit>
#include <QTableWidget>
#include <QTableView>
#include <QHeaderView>
#include "ButtonsPanel.h"

class SQLClientWindow : public QMainWindow{
    Q_OBJECT
public:
    SQLClientWindow();
    ButtonsPanel* button = new ButtonsPanel;
    QTextEdit* notificationPanel = new QTextEdit;
    QTableWidget* resultTable = new QTableWidget(5,3);


};

#endif //TP2_SQLCLIENTWINDOW_H
