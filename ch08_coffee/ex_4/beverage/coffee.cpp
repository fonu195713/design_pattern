#ifndef COFFEE_CPP
#define COFFEE_CPP

#include "coffee.hpp"

#include <iostream>
using namespace std;

Coffee::Coffee() {
    this -> wantsAdd = true;
}

void Coffee::brew() {
    cout << "Dripping coffee through filter" << endl;
}

bool Coffee::wantsCondiments() {
    return wantsAdd;
}

void Coffee::addCondiments() {
    cout << "Adding sugar and milk" << endl;
}

void Coffee::setCondiments(bool b) {
    this -> wantsAdd = b;
}

#endif