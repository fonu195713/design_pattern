#ifndef HOTTUB_COMMAND_HPP
#define HOTTUB_COMMAND_HPP

#include "command.hpp"
#include "../device/hottub.cpp"

#include <string>
using namespace std;

class HottubOnCommand : public Command {
    public:
        Hottub* hottub;
    
    public:
        HottubOnCommand(Hottub* hottub);
    
    public:
        string getClassName() override {
            return (this -> hottub -> name) + " on command";
        }

        void execute() override {
            this -> hottub -> on();
        }

        void undo() override {
            this -> hottub -> off();
        }
};

class HottubOffCommand : public Command {
    public:
        Hottub* hottub;
    
    public:
        HottubOffCommand(Hottub* hottub);
    
    public:
        string getClassName() override {
            return (this -> hottub -> name) + " off command";
        }

        void execute() override {
            this -> hottub -> off();
        }

        void undo() override {
            this -> hottub -> on();
        }
};

#endif