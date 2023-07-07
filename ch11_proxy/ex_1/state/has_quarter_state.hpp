#ifndef HAS_QUARTER_STATE_HPP
#define HAS_QUARTER_STATE_HPP

#include "state.cpp"

class HasQuarterState : public State {
    public:
        HasQuarterState(GumballMachine* gumball_machine, string name);
    
    public:
        void ejectQuarter() override;
        void turnCrank() override;
};

#endif