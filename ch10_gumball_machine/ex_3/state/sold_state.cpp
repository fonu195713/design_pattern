#ifndef SOLD_STATE_CPP
#define SOLD_STATE_CPP

#include "sold_state.hpp"

#include <iostream>
using namespace std;

SoldState::SoldState(GumballMachine* gumball_machine, string name)
    : State(gumball_machine, name) {}

void SoldState::releaseGumball() {
    cout << "A gumball is dispensing now..." << endl;
    this -> gumball_machine -> num_of_gumball -= 1;
    
    if(this -> gumball_machine -> num_of_gumball == 0)
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldOutState());
    else
        this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

#endif