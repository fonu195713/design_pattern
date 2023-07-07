#ifndef DISCO_COMMAND_CPP
#define DISCO_COMMAND_CPP

#include "discoCommand.hpp"

DiscoOnCommand::DiscoOnCommand(vector<Command*> list, string name) {
    this -> list = list;
    this -> name = name;
}

DiscoOffCommand::DiscoOffCommand(vector<Command*> list, string name) {
    this -> list = list;
    this -> name = name;
}

#endif