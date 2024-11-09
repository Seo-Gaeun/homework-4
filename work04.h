#ifndef WORK04_H
#define WORK04_H

#include <string>

using namespace std;

class Printer {
    string modelName;
    string brand;
    int printCount;
    int paperCount;
public:
    Printer(string m, string b, int p);
    string getModelName();
    string getBrand();
    int getPaperCount();
    bool printPages(int pages);
};

class InkPrinter : public Printer {
    int inkLevel;
public:
    InkPrinter(string m, string b, int p, int ink);
    void printInk(int pages);
    void displayStatus();
};

class LaserPrinter : public Printer {
    int tonerLevel;
public:
    LaserPrinter(string m, string b, int p, int toner);
    void printLaser(int pages);
    void displayStatus();
};

#endif
