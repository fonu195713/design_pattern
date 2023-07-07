#ifndef SOLD_STATE_CPP
#define SOLD_STATE_CPP

#include "sold_state.hpp"

#include <iostream>
using namespace std;

SoldState::SoldState(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void SoldState::insertQuarter() {
    cout << "x: Cannot insert the quarter now, We are already giving you a gumball." << endl;
}

void SoldState::ejectQuarter() {
    cout << "x: Cannot eject the quarter now, you already turned the crank." << endl;
}

void SoldState::turnCrank() {
    cout << "x: Turning the crank again cannot let you get more gumball." << endl;
}

void SoldState::dispense() {
    this -> gumball_machine -> releaseGumball();
    
    if(this -> gumball_machine -> gumballs == 0)
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldOutState());
    else
        this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

#endif