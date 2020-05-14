#include <iostream>
#include "QApplication"
#include "SQLClientWindow.h"
#include "LabeledTextField.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    auto* test = new SQLClientWindow;
    auto* test2 = new LabeledTextField;
    test->show();
    test2->show();
    return QApplication::exec();
}
