#ifndef NO_QUARTER_STATE_CPP
#define NO_QUARTER_STATE_CPP

#include "no_quarter_state.hpp"

#include <iostream>
using namespace std;

NoQuarterState::NoQuarterState(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void NoQuarterState::insertQuarter() {
    cout << "You inserted a quarter." << endl;
    this -> gumball_machine -> setState(this -> gumball_machine -> getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    cout << "x: You haven't inserted a quarter." << endl;
}

void NoQuarterState::turnCrank() {
    cout << "x: You turned the crank, but there's no quarter." << endl;
}

void NoQuarterState::dispense() {
    cout << "x: Cannot dispense, you need to pay first." << endl;
}

#endif