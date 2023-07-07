#ifndef POPPER_CPP
#define POPPER_CPP

#include "popper.hpp"

#include <iostream>
using namespace std;

void Popper::on() {
    cout << "Popcorn Popper on" << endl;
}

void Popper::pop() {
    cout << "Popcorn Popper popping popcorn!" << endl;
}

void Popper::off() {
    cout << "Popcorn Popper off" << endl;
}

#endif