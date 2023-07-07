#ifndef SOLD_OUT_STATE_CPP
#define SOLD_OUT_STATE_CPP

#include "sold_out_state.hpp"

#include <iostream>
using namespace std;

SoldOutState::SoldOutState(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void SoldOutState::insertQuarter() {
    cout << "x: You cannot insert a quarter, the machine is sold out." << endl;
}

void SoldOutState::ejectQuarter() {
    cout << "x: You can't eject the quarter because no quarterss were put in." << endl;
}

void SoldOutState::turnCrank() {
    cout << "x: You turn the crank, but nothing happens." << endl;
}

void SoldOutState::dispense() {
    cout << "x: No gumball can be dispensed." << endl;
}

#endif