#ifndef ROMOTE_CPP
#define ROMOTE_CPP

#include "romote.hpp"

Romote::Romote() {}

void Romote::setCommand(Command* cmd) {
    this -> command = cmd;
}

void Romote::buttonWasPressed() {
    command -> execute();
}

#endif