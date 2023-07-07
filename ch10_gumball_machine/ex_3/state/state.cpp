#ifndef STATE_CPP
#define STATE_CPP

#include "state.hpp"

#include <iostream>
#include <string>
using namespace std;

State::State(GumballMachine* gumball_machine, string name) {
    this -> gumball_machine = gumball_machine;
    this -> name = name;
}

string State::getStateName() {
    return (this -> name);
}

void State::insertQuarter() {
    this -> errorMessage("insertQuarter()");
}

void State::ejectQuarter() {
    this -> errorMessage("ejectQuarter()");
}

void State::turnCrank() {
    this -> errorMessage("turnCrank()");
}

void State::releaseGumball() {
    this -> errorMessage("releaseGumball()");
}

void State::refill(int gumballs) {
    this -> errorMessage("refill()");
}

void State::errorMessage(string method) {
    string state = this -> getStateName();
    cout << "err: state " << state;
    cout <<  " does not support " << method << " method." << endl;
}

#endif