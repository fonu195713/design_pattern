#ifndef SOLD_OUT_STATE_CPP
#define SOLD_OUT_STATE_CPP

#include "sold_out_state.hpp"

#include <iostream>
using namespace std;

SoldOutState::SoldOutState(GumballMachine* gumball_machine, string name)
    : State(gumball_machine, name) {}

void SoldOutState::refill(int gumballs) {
    this -> gumball_machine -> num_of_gumball += gumballs;
    this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

#endif