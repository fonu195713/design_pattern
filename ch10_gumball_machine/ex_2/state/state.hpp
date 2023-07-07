#ifndef STATE_HPP
#define STATE_HPP

class GumballMachine;

class State {
    public:
        GumballMachine* gumball_machine;

    public:
        virtual void insertQuarter() = 0;
        virtual void ejectQuarter() = 0;
        virtual void turnCrank() = 0;
        virtual void dispense() = 0;
};

#endif