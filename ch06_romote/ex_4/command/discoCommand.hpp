#ifndef DISCO_COMMAND_HPP
#define DISCO_COMMAND_HPP

#include "command.hpp"

#include <string>
#include <vector>
using namespace std;

class DiscoOnCommand : public Command {
    public:
        string name;
        vector<Command*> list = {};
    
    public:
        DiscoOnCommand(vector<Command*> list, string name);
    
    public:
        string getClassName() override {
            return (this -> name) + " on command";
        }

        void execute() override {
            for(Command* cmd : list) {
                cmd -> execute();
            }
        }

        void undo() override {
            for(Command* cmd : list) {
                cmd -> undo();
            }
        }
};

class DiscoOffCommand : public Command {
    public:
        string name;
        vector<Command*> list = {};
    
    public:
        DiscoOffCommand(vector<Command*> list, string name);
    
    public:
        string getClassName() override {
            return (this -> name) + " off command";
        }

        void execute() override {
            for(Command* cmd : list) {
                cmd -> execute();
            }
        }

        void undo() override {
            for(Command* cmd : list) {
                cmd -> undo();
            }
        }
};

#endif