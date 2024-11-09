#include <iostream>
#include "work04.h"

int main() {
    InkPrinter* inkPrinter = new InkPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laserPrinter = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
    int printerType, pageCount;
    char continuePrinting;

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
    cout << "��ũ�� : "; inkPrinter->displayStatus();
    cout << "������ : "; laserPrinter->displayStatus();

    while (true) {
        cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
        cin >> continuePrinting;
        if (continuePrinting == 'n') break;
    }
}
