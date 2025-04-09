//
// Created by хус on 26.03.2025.
//
#include "money.h"
#include <cmath>

#include <fstream>

void moneyAdd(MoneyStruct &target, MoneyStruct &source) {
    if (source.kop >= 100) {
        source.grn += source.kop / 100;
        source.kop %= 100;
    }
    target.grn += source.grn;
    target.kop += source.kop;

    if (target.kop >= 100) {
        target.grn += target.kop / 100;
        target.kop %= 100;
    }
}

void moneyMultiply(MoneyStruct& p, const int amount){
    p.grn *= amount;
    p.kop *= amount;
}

void moneyRound(MoneyStruct& p) {
    while (p.kop>100) {
        p.kop = p.kop - 100;
        p.grn++;
    }
    p.kop = (round(p.kop/10.0)*10);
}

void readFile(MoneyStruct& target, std::string fileName) {
    std::string line;
    int linesCount = 0;
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cout << "error occurred sorry lol :P";
    }
    while (std::getline(file, line)) {
        linesCount++;
    }
}

