#ifndef TELEVISION_COMMAND_HPP
#define TELEVISION_COMMAND_HPP

#include "command.hpp"
#include "../device/television.cpp"

#include <string>
using namespace std;


class TelevisionOnCommand : public Command {
    public:
        Television* television;

    public:
        TelevisionOnCommand(Television* tv);
    
    public:
        string getClassName() override {
            return (this -> television -> name) + " on command";
        }

        void execute() override {
            this -> television -> on();
        }

        void undo() override {
            this -> television -> off();
        }
};

class TelevisionOffCommand : public Command {
    public:
        Television* television;

    public:
        TelevisionOffCommand(Television* tv);
    
    public:
        string getClassName() override {
            return (this -> television -> name) + " off command";
        }

        void execute() override {
            this -> television -> off();
        }

        void undo() override {
            this -> television -> on();
        }
};

#endif