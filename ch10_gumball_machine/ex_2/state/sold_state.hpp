#ifndef SOLD_STATE_HPP
#define SOLD_STATE_HPP

#include "state.hpp"
#include "../machine/gumball_machine.hpp"

class SoldState : public State {
    public:
        SoldState(GumballMachine* machine);

    public:
        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
};

#endif