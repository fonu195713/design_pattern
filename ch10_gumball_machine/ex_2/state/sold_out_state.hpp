#ifndef SOLD_OUT_STATE_HPP
#define SOLD_OUT_STATE_HPP

#include "state.hpp"
#include "../machine/gumball_machine.hpp"

class SoldOutState : public State {
    public:
        SoldOutState(GumballMachine* machine);

    public:
        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
};

#endif