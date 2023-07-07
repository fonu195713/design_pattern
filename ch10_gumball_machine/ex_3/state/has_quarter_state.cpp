#ifndef HAS_QUARTER_STATE_CPP
#define HAS_QUARTER_STATE_CPP

#include "has_quarter_state.hpp"

#include <ctime>
#include <iostream>
#include <random>
#include <string>
using namespace std;

HasQuarterState::HasQuarterState(GumballMachine* gumball_machine, string name)
    : State(gumball_machine, name) {}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned." << endl;
    this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "Turning the crank..." << endl;

    mt19937 seed(time(nullptr));
    uniform_int_distribution<int> rand(1, 10);

    if(rand(seed) == 1)
        this -> gumball_machine -> setState(this -> gumball_machine -> getWinnerState());
    else
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldState());
    
    this -> gumball_machine -> releaseGumball();
}

#endif