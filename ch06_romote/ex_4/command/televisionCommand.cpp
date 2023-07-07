#ifndef TELEVISION_COMMAND_CPP
#define TELEVISION_COMMAND_CPP

#include "televisionCommand.hpp"

TelevisionOnCommand::TelevisionOnCommand(Television* tv) {
    this -> television = tv;
}

TelevisionOffCommand::TelevisionOffCommand(Television* tv) {
    this -> television = tv;
}

#endif