#ifndef HAS_QUARTER_STATE_CPP
#define HAS_QUARTER_STATE_CPP

#include "has_quarter_state.hpp"

#include <iostream>
using namespace std;

HasQuarterState::HasQuarterState(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void HasQuarterState::insertQuarter() {
    cout << "x: You cannot insert another quarter." << endl;
}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned." << endl;
    this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "Turning the crank..." << endl;
    this -> gumball_machine -> setState(this -> gumball_machine -> getSoldState());
}

void HasQuarterState::dispense() {
    cout << "x: No gumball can be dispensed." << endl;
}

#endif