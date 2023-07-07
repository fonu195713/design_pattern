#ifndef COFFEE_CPP
#define COFFEE_CPP

#include "coffee.hpp"

#include <iostream>
using namespace std;

void Coffee::brew() {
    cout << "Dripping coffee through filter" << endl;
}

void Coffee::addCondiments() {
    cout << "Adding sugar and milk" << endl;
}

#endif