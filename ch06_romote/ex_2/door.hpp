#ifndef DOOR_HPP
#define DOOR_HPP

#include "command.hpp"

#include <string>
using namespace std;

class Door {
    public:
        string name;
    
    public:
        Door(string name);
        
    public:
        void open();
        void close();
};

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
};

#endif