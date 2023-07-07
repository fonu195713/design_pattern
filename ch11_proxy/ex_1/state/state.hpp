#ifndef STATE_HPP
#define STATE_HPP

#include <string>
using namespace std;

class GumballMachine;

class State {
    public:
        GumballMachine* gumball_machine;
        string name;

    public:
        State(GumballMachine* gumball_machine, string name);

    public:
        virtual string getStateName();

    public:
        virtual void insertQuarter();
        virtual void ejectQuarter();
        virtual void turnCrank();
        virtual void releaseGumball();
        virtual void refill(int gumballs);

    public:
        void errorMessage(string method);
};

#endif