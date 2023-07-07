#ifndef FAN_COMMAND_CPP
#define FAN_COMMAND_CPP

#include "fanCommand.hpp"

FanOnCommand::FanOnCommand(Fan* fan) {
    this -> fan = fan;
    this -> prevSpeed = Fan::OFF;
}

FanOffCommand::FanOffCommand(Fan* fan) {
    this -> fan = fan;
    this -> prevSpeed = Fan::OFF;
}

#endif