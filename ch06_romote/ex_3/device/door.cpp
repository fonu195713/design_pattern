#ifndef DOOR_CPP
#define DOOR_CPP

#include "door.hpp"

#include <iostream>
using namespace std;

Door::Door(string name) {
    this -> name = name + " door";
}

void Door::open() {
    cout << (this -> name) << " is open." << endl;
}

void Door::close() {
    cout << (this -> name) << " is close." << endl;
}

#endif