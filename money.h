//
// Created by хус on 26.03.2025.
//

#ifndef MONEY_H
#define MONEY_H
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

inline struct MoneyStruct {
    int grn;
    short int kop;
} singleProductOld, singleProductNew;

void moneyMultiply(MoneyStruct& p, int amount);
void moneyAdd(MoneyStruct& target, MoneyStruct& source);
void moneyRound(MoneyStruct& p);
void readFile(MoneyStruct& target, std::string fileName);
#endif //MONEY_H
