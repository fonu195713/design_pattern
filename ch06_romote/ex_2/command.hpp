#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
using namespace std;

class Command {
    public:
        virtual string getClassName() = 0;
        virtual void execute() = 0;
};

class NoCommand : public Command {
    public:
        string getClassName() override {
            return "No Command";
        }
        
        void execute() override {};
};

#endif