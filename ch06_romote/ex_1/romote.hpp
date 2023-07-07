#ifndef ROMOTE_HPP
#define ROMOTE_HPP

#include "command.hpp"

class Romote {
    public:
        Command* command;
    
    public:
        Romote();
    
    public:
        void setCommand(Command* cmd);
        void buttonWasPressed();
};

#endif