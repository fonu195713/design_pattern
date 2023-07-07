#ifndef LIGHT_CPP
#define LIGHT_CPP

#include "light.hpp"

#include <iostream>
using namespace std;

void Light::on() {
    cout << "Light is on." << endl;
}

LightOnCommand::LightOnCommand(Light* light) {
    this -> light = light;
}

#endif