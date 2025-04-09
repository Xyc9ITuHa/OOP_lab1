#include <algorithm>
#include <fstream>
#include <iostream>
#include "money.h"


using namespace std;
int main() {
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

        cout << singleProductNew.grn << " grn " << singleProductNew.kop << " kop"<< ", ";
        //amount
        ss >> amount;
        ss >> temp;
        cout << amount << " " << temp << endl;
        moneyMultiply(singleProductNew, amount);
        moneyAdd(sumNoRounding, singleProductNew);
    }
    cout << "\t total sum without rounding is: " << sumNoRounding.grn << " grn " << sumNoRounding.kop << " kop " << endl;
    moneyRound(sumNoRounding);
    cout << "\t total sum with rounding is: " << sumNoRounding.grn << " grn " << sumNoRounding.kop << " kop " << endl;

    return 0;
}
