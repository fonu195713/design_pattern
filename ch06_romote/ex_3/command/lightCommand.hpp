#ifndef LIGHT_COMMAND_HPP
#define LIGHT_COMMAND_HPP

#include "command.hpp"
#include "../device/light.cpp"

#include <string>
using namespace std;


class LightOnCommand : public Command {
    public:
        Light* light;

    public:
        LightOnCommand(Light* light);
    
    public:
        string getClassName() override {
            return (this -> light -> name) + " on command";
        }

        void execute() override {
            this -> light -> on();
        }

        void undo() override {
            this -> light -> off();
        }
};

class LightOffCommand : public Command {
    public:
        Light* light;

    public:
        LightOffCommand(Light* light);
    
    public:
        string getClassName() override {
            return (this -> light -> name) + " off command";
        }

        void execute() override {
            this -> light -> off();
        }

        void undo() override {
            this -> light -> on();
        }
};

#endif