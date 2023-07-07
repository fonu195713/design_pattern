#ifndef GUMBALL_MACHINE_CPP
#define GUMBALL_MACHINE_CPP

#include "gumball_machine.hpp"
#include "../state/no_quarter_state.cpp"
#include "../state/has_quarter_state.cpp"
#include "../state/sold_state.cpp"
#include "../state/winner_state.cpp"
#include "../state/sold_out_state.cpp"

#include <string>
using namespace std;

GumballMachine::GumballMachine(string location, int gumballs) {
    this -> no_quarter_state = new NoQuarterState(this, "NoQuarterState");
    this -> has_quarter_state = new HasQuarterState(this, "HasQuarterState");
    this -> sold_state = new SoldState(this, "SoldState");
    this -> winner_state = new WinnerState(this, "WinnerState");
    this -> sold_out_state = new SoldOutState(this, "SoldOutState");
    
    this -> location = location;
    this -> num_of_gumball = gumballs;

    if(this -> num_of_gumball == 0)
        this -> state = this -> sold_out_state;
    else
        this -> state = this -> no_quarter_state;
}

void GumballMachine::insertQuarter() {
    this -> state -> insertQuarter();
}

void GumballMachine::ejectQuarter() {
    this -> state -> ejectQuarter();
}

void GumballMachine::turnCrank() {
    this -> state -> turnCrank();
}

void GumballMachine::releaseGumball() {
    this -> state -> releaseGumball();
}

void GumballMachine::refill(int gumballs) {
    this -> state -> refill(gumballs);
}

int GumballMachine::getCount() {
    return (this -> num_of_gumball);
}

State* GumballMachine::getNoQuarterState() {
    return (this -> no_quarter_state);
}

State* GumballMachine::getHasQuarterState() {
    return (this -> has_quarter_state);
}

State* GumballMachine::getSoldState() {
    return (this -> sold_state);
}

State* GumballMachine::getWinnerState() {
    return (this -> winner_state);
}

State* GumballMachine::getSoldOutState() {
    return (this -> sold_out_state);
}

void GumballMachine::setState(State* inpt_state) {
    this -> state = inpt_state;
}

#endif