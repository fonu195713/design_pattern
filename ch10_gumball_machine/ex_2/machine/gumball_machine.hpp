#ifndef GUMBALL_MAcHINE_HPP
#define GUMBALL_MAcHINE_HPP

#include "../state/state.hpp"

#include <string>
using namespace std;

class GumballMachine {
    public:
        State* sold_out_state;
        State* no_quarter_state;
        State* has_quarter_state;
        State* sold_state;
        State* winner_state;

    public:
        State* state;
        int gumballs;
    
    public:
        GumballMachine(int gumballs);
    
    public:
        void insertQuarter();
        void ejectQuarter();
        void turnCrank();
        void setState(State* state);
        void releaseGumball();
        void addGumballs(int gumball);
    
    public:
        State* getSoldOutState();
        State* getNoQuarterState();
        State* getHasQuarterState();
        State* getSoldState();
        State* getWinnerState();
        string getState();
};

#endif