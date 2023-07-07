#ifndef ROMOTE_CPP
#define ROMOTE_CPP

#include "romote.hpp"

#include <iostream>
using namespace std;

Romote::Romote() {
    Command* no_command = new NoCommand();
    for(int i = 0; i < ROMOTE_NUTTONS; i++) {
        on_command.push_back(no_command);
        off_command.push_back(no_command);
    }
    undoCommand = no_command;
}

void Romote::setCommand(int i, Command* on, Command* off) {
    on_command[i] = on;
    off_command[i] = off;
}

void Romote::onButtonWasPressed(int i) {
    on_command[i] -> execute();
    undoCommand = on_command[i];
}

void Romote::offButtonWasPressed(int i) {
    off_command[i] -> execute();
    undoCommand = off_command[i];
}

void Romote::undoButtonWasPressed() {
    undoCommand -> undo();
    undoCommand = new NoCommand();
}

void Romote::showSetting() {
    cout << "=======" << endl;
    cout << "Romote control: " << endl;
    for(int i = 0; i < ROMOTE_NUTTONS; i++) {
        cout << "  " << i << ": on[" << on_command[i] -> getClassName() << "], ";
        cout << "off[" << off_command[i] -> getClassName() << "]" << endl;
    }
    cout << "=======" << endl;
}

#endif