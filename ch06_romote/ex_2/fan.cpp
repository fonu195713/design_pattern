#ifndef FAN_CPP
#define FAN_CPP

#include "fan.hpp"

#include <iostream>
using namespace std;

Fan::Fan(string name) {
    this -> name = name + " fan";
}

void Fan::on() {
    cout << (this -> name) << " is on." << endl;
}

void Fan::off() {
    cout << (this -> name) << " off." << endl;
}

FanOnCommand::FanOnCommand(Fan* fan) {
    this -> fan = fan;
}

FanOffCommand::FanOffCommand(Fan* fan) {
    this -> fan = fan;
}

#endif