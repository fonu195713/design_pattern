#ifndef TEA_CPP
#define TEA_CPP

#include "tea.hpp"

#include <iostream>
using namespace std;

void Tea::brew() {
    cout << "Steeping the tea" << endl;
}

void Tea::addCondiments() {
    cout << "Adding lemon" << endl;
}

#endif