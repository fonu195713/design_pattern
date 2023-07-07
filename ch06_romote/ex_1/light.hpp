#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "command.hpp"

class Light {
    public:
        void on();
};

class LightOnCommand : public Command {
    public:
        Light* light;

    public:
        LightOnCommand(Light* light);
    
    public:
        void execute() override {
            this -> light -> on();
        }
};

#endif