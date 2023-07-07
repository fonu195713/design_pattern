#ifndef LIGHT_CPP
#define LIGHT_CPP

#include "light.hpp"

#include <iostream>
using namespace std;

Light::Light(string name) {
    this -> name = name + " light";
}

void Light::on() {
    cout << (this -> name) << " is on." << endl;
}

void Light::off() {
    cout << (this -> name) << " off." << endl;
}

#endif