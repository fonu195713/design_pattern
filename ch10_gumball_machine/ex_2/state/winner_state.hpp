#ifndef WINNER_STATE_HPP
#define WINNER_STATE_HPP

#include "state.hpp"
#include "../machine/gumball_machine.hpp"

class WinnerState : public State {
    public:
        WinnerState(GumballMachine* machine);

    public:
        void insertQuarter() override;
        void ejectQuarter() override;
        void turnCrank() override;
        void dispense() override;
};

#endif