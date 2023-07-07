#ifndef SOLD_OUT_STATE_HPP
#define SOLD_OUT_STATE_HPP

#include "state.cpp"

class SoldOutState : public State {
    public:
        SoldOutState(GumballMachine* gumball_machine, string name);
    
    public:
        void refill(int gumballs) override;
};

#endif