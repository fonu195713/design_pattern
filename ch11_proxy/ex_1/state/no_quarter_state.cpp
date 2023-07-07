#ifndef NO_QUARTER_STATE_CPP
#define NO_QUARTER_STATE_CPP

#include "no_quarter_state.hpp"

#include <iostream>
using namespace std;

NoQuarterState::NoQuarterState(GumballMachine* gumball_machine, string name)
    : State(gumball_machine, name) {}

void NoQuarterState::insertQuarter() {
    cout << "You inserted a quarter." << endl;
    this -> gumball_machine -> setState(this -> gumball_machine -> getHasQuarterState());
}

void NoQuarterState::refill(int gumballs) {
    this -> gumball_machine -> num_of_gumball += gumballs;
    this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

#endif