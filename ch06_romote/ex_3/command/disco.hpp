#ifndef DOOR_COMMAND_HPP
#define DOOR_COMMAND_HPP

#include "command.hpp"

#include <vector>
using namespace std;

class DiscoCommand : public Command {
    public:
        vector<Command*> commands;

    public:
        DiscoCommand(vector<Command*> list);
    
        void execute() override {
            for(Command* cmd : commands) {
                cmd -> execute();
            }
        }
};

#endif