#ifndef GARAGE_DOOR_HPP
#define GARAGE_DOOR_HPP

#include "command.hpp"

class GarageDoor {
    public:
        void open();
};

class GarageDoorOpenCommand : public Command {
    public:
        GarageDoor* door;
    
    public:
        GarageDoorOpenCommand(GarageDoor* door);
    
    public:
        void execute() override {
            this -> door -> open();
        }
};

#endif