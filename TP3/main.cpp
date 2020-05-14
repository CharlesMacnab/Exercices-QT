#include <iostream>
#include "QApplication"
#include "IHM.h"
#include "IHM2.h"
#include "IMH3.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    //-----------Exercice 1----------------//

    auto* test = new IHM;

    test->show();

    //----------Exercice 2-----------------//

    auto* test2 = new IHM2;

    test2->show();

    //----------Exercice 2 partie 2--------//

    auto* test3 = new IMH3;

    test3->show();

    return app.exec();

}
