#ifndef DOOR_COMMAND_HPP
#define DOOR_COMMAND_HPP

#include "command.hpp"
#include "../device/door.cpp"

#include <string>
using namespace std;

class DoorOpenCommand : public Command {
    public:
        Door* door;
    
    public:
        DoorOpenCommand(Door* door);
    
    public:
        string getClassName() override {
            return (this -> door -> name) + " on command";
        }

        void execute() override {
            this -> door -> open();
        }

        void undo() override {
            this -> door -> close();
        }
};

class DoorCloseCommand : public Command {
    public:
        Door* door;
    
    public:
        DoorCloseCommand(Door* door);
    
    public:
        string getClassName() override {
            return (this -> door -> name) + " close command";
        }

        void execute() override {
            this -> door -> close();
        }

        void undo() override {
            this -> door -> open();
        }
};

#endif