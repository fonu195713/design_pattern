#ifndef NO_QUARTER_STATE_HPP
#define NO_QUARTER_STATE_HPP

#include "state.hpp"
#include "../machine/gumball_machine.hpp"

class NoQuarterState : public State {
    public:
        NoQuarterState(GumballMachine* machine);

    public:
        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
};

#endif