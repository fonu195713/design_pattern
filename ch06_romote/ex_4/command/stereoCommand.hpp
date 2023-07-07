#ifndef STEREO_COMMAND_HPP
#define STEREO_COMMAND_HPP

#include "command.hpp"
#include "../device/stereo.cpp"

#include <string>
using namespace std;

class StereoOnCommand : public Command {
    public:
        Stereo* stereo;
    
    public:
        StereoOnCommand(Stereo* stereo);
    
    public:
        string getClassName() override {
            return (this -> stereo -> name) + " on command";
        }

        void execute() override {
            stereo -> on();
            stereo -> setCD(new CD("Thriller"));
            stereo -> setVolume(82);
        }

        void undo() override {
            stereo -> off();
        }
};

class StereoOffCommand : public Command {
    public:
        Stereo* stereo;
    
    public:
        StereoOffCommand(Stereo* stereo);
    
    public:
        string getClassName() override {
            return (this -> stereo -> name) + " off command";
        }

        void execute() override {
            stereo -> off();
        }

        void undo() override {
            stereo -> on();
            stereo -> setCD(new CD("Thriller"));
            stereo -> setVolume(82);
        }
};

#endif