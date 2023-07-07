#ifndef STEREO_HPP
#define STEREO_HPP

#include "command.hpp"

#include <string>
using namespace std;

class CD {
    public:
        string name;

    public:
        CD(string name);
};

class Stereo {
    public:
        string name;
        CD* cd;
        int volume;

    public:
        Stereo(string name);

    public:
        void on();
        void off();
        void setCD(CD* cd);
        void setVolume(int v);
};

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
};

#endif