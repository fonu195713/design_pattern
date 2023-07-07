#ifndef FAN_CPP
#define FAN_CPP

#include "fan.hpp"

#include <iostream>
using namespace std;

Fan::Fan(string name) {
    this -> name = name + " fan";
    this -> speed = Fan::OFF;
}

void Fan::off() {
    this -> speed = Fan::OFF;
    cout << (this -> name) << " off." << endl;
}

void Fan::low() {
    this -> speed = Fan::LOW;
    cout << (this -> name) << " is on low mode." << endl;
}

void Fan::medium() {
    this -> speed = Fan::MEDIUM;
    cout << (this -> name) << " is on medium mode." << endl;
}

void Fan::high() {
    this -> speed = Fan::HIGH;
    cout << (this -> name) << " is on high mode." << endl;
}

int Fan::getSpeed() {
    return (this -> speed);
}


#endif