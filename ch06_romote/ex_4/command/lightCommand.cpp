#ifndef LIGHT_COMMAND_CPP
#define LIGHT_COMMAND_CPP

#include "lightCommand.hpp"

LightOnCommand::LightOnCommand(Light* light) {
    this -> light = light;
}

LightOffCommand::LightOffCommand(Light* light) {
    this -> light = light;
}

#endif