#ifndef ROMOTE_HPP
#define ROMOTE_HPP

#include "command.hpp"

#include <vector>
using namespace std;

#define ROMOTE_NUTTONS 5

class Romote {
    public:
        vector<Command*> on_command;
        vector<Command*> off_command;
    
    public:
        Romote();
    
    public:
        void setCommand(int i, Command* on, Command* off);
        void onButtonWasPressed(int i);
        void offButtonWasPressed(int i);
        void showSetting();
};

#endif