#ifndef CAFFEINE_BEVERAGE_CPP
#define CAFFEINE_BEVERAGE_CPP

#include "caffeineBeverage.hpp"

#include <iostream>
using namespace std;

void CaffeineBeverage::prepareRecipe() {
    this -> boilWater();
    this -> brew();
    this -> pourInCup();
    if(this -> wantsCondiments()) {
        this -> addCondiments();
    }
};

void CaffeineBeverage::boilWater() {
    cout << "Boiling water" << endl;
}

void CaffeineBeverage::pourInCup() {
    cout << "Pouring into cup" << endl;
}

bool CaffeineBeverage::wantsCondiments() {
    return true;
}

#endif