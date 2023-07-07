#ifndef HAS_QUARTER_STATE_HPP
#define HAS_QUARTER_STATE_HPP

#include "state.hpp"
#include "../machine/gumball_machine.hpp"

class HasQuarterState : public State {
    public:
        HasQuarterState(GumballMachine* machine);

    public:
        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
};

#endif