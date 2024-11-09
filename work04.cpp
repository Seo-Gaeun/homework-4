#include "work04.h"
#include <iostream>

Printer::Printer(string m, string b, int p) {
    modelName = m;
    brand = b;
    paperCount = p;
}

string Printer::getModelName() { return modelName; }
string Printer::getBrand() { return brand; }
int Printer::getPaperCount() { return paperCount; }

bool Printer::printPages(int pages) {
    printCount = pages;
    if (paperCount >= printCount) {
        paperCount -= printCount;
        return true;
    }
    else {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        return false;
    }
}

InkPrinter::InkPrinter(string m, string b, int p, int ink) : Printer(m, b, p) {
    inkLevel = ink;
}

void InkPrinter::printInk(int pages) {
    if (printPages(pages)) {
        if (inkLevel >= pages) {
            inkLevel -= pages;
            cout << "프린트하였습니다." << endl;
        }
    }
}

void InkPrinter::displayStatus() {
    cout << getModelName() << " ," << getBrand() << " ,남은 종이 " << getPaperCount() << "장 ,남은 잉크 " << inkLevel << endl;
}

LaserPrinter::LaserPrinter(string m, string b, int p, int toner) : Printer(m, b, p) {
    tonerLevel = toner;
}

void LaserPrinter::printLaser(int pages) {
    if (printPages(pages)) {
        if (tonerLevel >= pages) {
            tonerLevel -= pages;
            cout << "프린트하였습니다." << endl;
        }
    }
}

void LaserPrinter::displayStatus() {
    cout << getModelName() << " ," << getBrand() << " ,남은 종이 " << getPaperCount() << "장 ,남은 토너 " << tonerLevel << endl;
}
