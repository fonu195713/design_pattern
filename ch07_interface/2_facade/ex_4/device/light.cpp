#ifndef LIGHT_CPP
#define LIGHT_CPP

#include "light.hpp"

#include <iostream>
using namespace std;

void Light::dim(int i) {
    cout << "Theater Ceiling Lights dimming to" << i << "%" << endl;
}

void Light::off() {
    cout << "Theater Ceiling Lights on" << endl;
}

#endif