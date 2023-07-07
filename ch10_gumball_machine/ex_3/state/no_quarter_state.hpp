#ifndef NO_QUARTER_STATE_HPP
#define NO_QUARTER_STATE_HPP

#include "state.cpp"

class NoQuarterState : public State {
    public:
        NoQuarterState(GumballMachine* gumball_machine, string name);
    
    public:
        void insertQuarter() override;
        void refill(int gumballs) override;
};

#endif