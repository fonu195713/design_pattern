#ifndef SOLD_STATE_HPP
#define SOLD_STATE_HPP

#include "state.cpp"

class SoldState : public State {
    public:
        SoldState(GumballMachine* gumball_machine, string name);
    
    public:
        void releaseGumball() override;
};

#endif