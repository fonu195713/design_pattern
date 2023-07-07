#ifndef DOOR_COMMAND_CPP
#define DOOR_COMMAND_CPP

#include "doorCommand.hpp"

DoorOpenCommand::DoorOpenCommand(Door* door) {
    this -> door = door;
}

DoorCloseCommand::DoorCloseCommand(Door* door) {
    this -> door = door;
}

#endif