#ifndef ROMOTE_HPP
#define ROMOTE_HPP

#include "command/command.hpp"

#include <vector>
using namespace std;

#define ROMOTE_NUTTONS 7

class Romote {
    public:
        vector<Command*> on_command;
        vector<Command*> off_command;
        Command* undoCommand;

    public:
        Romote();
    
    public:
        void setCommand(int i, Command* on, Command* off);
        void onButtonWasPressed(int i);
        void offButtonWasPressed(int i);
        void undoButtonWasPressed();
        void showSetting();
};

#endif