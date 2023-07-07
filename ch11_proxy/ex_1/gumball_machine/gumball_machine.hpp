#ifndef GUMBALL_MACHINE_HPP
#define GUMBALL_MACHINE_HPP

#include "../state/state.hpp"

#include <string>
using namespace std;

class GumballMachine {
    public:
        State* no_quarter_state;
        State* has_quarter_state;
        State* sold_state;
        State* winner_state;
        State* sold_out_state;
    
    public:
        string location;
        int num_of_gumball;
        State* state;
    
    public:
        GumballMachine(string location, int gumballs);

    public:
        void insertQuarter();
        void ejectQuarter();
        void turnCrank();
        void releaseGumball();
        void refill(int gumballs);
        int getCount();
    
    public:
        State* getNoQuarterState();
        State* getHasQuarterState();
        State* getSoldState();
        State* getWinnerState();
        State* getSoldOutState();
        void setState(State* inpt_state);
};

#endif