#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "command.hpp"

#include <string>
using namespace std;

class Light {
    public:
        string name;
    
    public:
        Light(string name);

    public:
        void on();
        void off();
};

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
};

#endif