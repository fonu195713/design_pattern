#ifndef DOOR_COMMAND_CPP
#define DOOR_COMMAND_CPP

#include "hottubCommand.hpp"

HottubOnCommand::HottubOnCommand(Hottub* hottub) {
    this -> hottub = hottub;
}

HottubOffCommand::HottubOffCommand(Hottub* hottub) {
    this -> hottub = hottub;
}

#endif