#include <algorithm>
#include <fstream>
#include <iostream>
#include "money.h"


using namespace std;
int main() {
    int linesCount = 0;
    string line;
    ifstream inputFile("data.txt");
    if (!inputFile.is_open()) {
        cout << "File could not be opened" << endl;
        exit(23);
    }
    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        string temp;
        string name;
        int amount = 0;

        while (ss >> temp ) { //full name godammit
            if (temp.back() == ',') {
                temp.pop_back();
                name += " " + temp;
                break;
            }
            name += temp;
        }
        cout << name << ", ";
        // grn
        ss >> singleProductNew.grn;
        ss >> temp;
        // kop
        ss >> singleProductNew.kop;
        ss >> temp;

        moneyRound(singleProductNew);
        cout << singleProductNew.grn << " grn " << singleProductNew.kop << " kop"<< ", ";
        //amount
        ss >> amount;
        ss >> temp;
        cout << amount << " " << temp << endl;
        moneyMultiply(singleProductNew, amount);
        moneyAdd(singleProductOld, singleProductNew);
    }
    cout << "\t total sum is: " << singleProductOld.grn << " grn " << singleProductOld.kop << " kop " << endl;
    return 0;
}
