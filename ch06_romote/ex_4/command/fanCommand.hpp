#ifndef FAN_COMMAND_HPP
#define FAN_COMMAND_HPP

#include "command.hpp"
#include "../device/fan.cpp"

#include <string>
using namespace std;

class FanOnCommand : public Command {
    public:
        Fan* fan;
        int prevSpeed;
    
    public:
        FanOnCommand(Fan* fan);
    
    public:
        string getClassName() override {
            return (this -> fan -> name) + " on command";
        }

        void execute() override {
            this -> prevSpeed = fan -> speed;
            switch(fan -> speed) {
                case Fan::OFF:
                    fan -> low();
                    break;
                case Fan::LOW:
                    fan -> medium();
                    break;
                case Fan::MEDIUM:
                case Fan::HIGH:
                    fan -> high();
                    break;
            }
        }

        void undo() override {
            switch(prevSpeed) {
                case Fan::OFF:
                    fan -> off();
                    break;
                case Fan::LOW:
                    fan -> low();
                    break;
                case Fan::MEDIUM:
                    fan -> medium();
                    break;
                case Fan::HIGH:
                    fan -> high();
                    break;
            }
            prevSpeed = Fan::OFF;
        }
};

class FanOffCommand : public Command {
    public:
        Fan* fan;
        int prevSpeed;
    
    public:
        FanOffCommand(Fan* fan);
    
    public:
        string getClassName() override {
            return (this -> fan -> name) + " close command";
        }

        void execute() override {
            this -> fan -> off();
        }

        void undo() override {
            this -> fan -> low();
        }
};

#endif