#include <iostream>
#include "work04.h"

int main() {
    InkPrinter* inkPrinter = new InkPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laserPrinter = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
    int printerType, pageCount;
    char continuePrinting;

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 : "; inkPrinter->displayStatus();
    cout << "레이저 : "; laserPrinter->displayStatus();

    while (true) {
        cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> printerType >> pageCount;
        if (printerType == 1) {
            inkPrinter->printInk(pageCount);
            inkPrinter->displayStatus();
            laserPrinter->displayStatus();
        }
        if (printerType == 2) {
            laserPrinter->printLaser(pageCount);
            inkPrinter->displayStatus();
            laserPrinter->displayStatus();
        }
        cout << "계속 프린트 하시겠습니까(y/n)>>";
        cin >> continuePrinting;
        if (continuePrinting == 'n') break;
    }
}
