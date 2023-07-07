#ifndef WINNER_STATE_HPP
#define WINNER_STATE_HPP

#include "state.cpp"

class WinnerState : public State {
    public:
        WinnerState(GumballMachine* gumball_machine, string name);
    
    public:
        void releaseGumball() override;
};

#endif