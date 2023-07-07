#ifndef FAN_HPP
#define FAN_HPP

#include "command.hpp"

#include <string>
using namespace std;

class Fan {
    public:
        string name;
    
    public:
        Fan(string name);
        
    public:
        void on();
        void off();
};

class FanOnCommand : public Command {
    public:
        Fan* fan;
    
    public:
        FanOnCommand(Fan* fan);
    
    public:
        string getClassName() override {
            return (this -> fan -> name) + " on command";
        }

        void execute() override {
            this -> fan -> on();
        }
};

class FanOffCommand : public Command {
    public:
        Fan* fan;
    
    public:
        FanOffCommand(Fan* fan);
    
    public:
        string getClassName() override {
            return (this -> fan -> name) + " close command";
        }

        void execute() override {
            this -> fan -> off();
        }
};

#endif