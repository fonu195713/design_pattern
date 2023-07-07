#ifndef GARAGE_DOOR_CPP
#define GARAGE_DOOR_CPP

#include "door.hpp"

#include <iostream>
using namespace std;

void GarageDoor::open() {
    cout << "Door is open." << endl;
}

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* door) {
    this -> door = door;
}

#endif