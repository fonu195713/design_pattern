#ifndef GUMBALL_MAcHINE_CPP
#define GUMBALL_MAcHINE_CPP

#include "gumball_machine.hpp"
#include "../state/sold_out_state.cpp"
#include "../state/no_quarter_state.cpp"
#include "../state/has_quarter_state.cpp"
#include "../state/sold_state.cpp"
#include "../state/winner_state.cpp"

#include <ctime>
#include <iostream>
#include <random>
#include <string>
using namespace std;

class StateUndefinedException : public exception {
    private:
        string message;

    public:
        explicit StateUndefinedException(const string& msg) : message(msg) {}

        const char* what() const noexcept override {
            return message.c_str();
        }
};

GumballMachine::GumballMachine(int gumballs) {
    this -> gumballs = gumballs;
    this -> sold_out_state = new SoldOutState(this);
    this -> no_quarter_state = new NoQuarterState(this);
    this -> has_quarter_state = new HasQuarterState(this);
    this -> sold_state = new SoldState(this);
    this -> winner_state = new WinnerState(this);

    if(this -> gumballs == 0)
        this -> state = sold_out_state;
    else
        this -> state = no_quarter_state;
};


void GumballMachine::insertQuarter() {
    this -> state -> insertQuarter();
}

void GumballMachine::ejectQuarter() {
    this -> state -> ejectQuarter();
}

void GumballMachine::turnCrank() {
    this -> state -> turnCrank();

    if(this -> state == this -> sold_state) {
        mt19937 seed(time(nullptr));
        uniform_int_distribution<int> rand(1, 10);
        if(rand(seed) == 1) {
            this -> state = this -> getWinnerState();
        }

        this -> state -> dispense();
    }
}

void GumballMachine::setState(State* state) {
    this -> state = state;
}

void GumballMachine::releaseGumball() {
    cout << "A gumball is dispensing now..." << endl;
    (this -> gumballs) -= 1;
}

void GumballMachine::addGumballs(int gumball) {
    (this -> gumballs) += gumball;
    this -> state = this -> no_quarter_state;
}

State* GumballMachine::getSoldOutState() {
    return (this -> sold_out_state);
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

string GumballMachine::getState() {
    if(dynamic_cast<SoldOutState*>(this -> state))
        return "Sold Out State";
    else if(dynamic_cast<NoQuarterState*>(this -> state))
        return "No Quarter State";
    else if(dynamic_cast<HasQuarterState*>(this -> state))
        return "Has Quarter State";
    else if(dynamic_cast<SoldState*>(this -> state))
        return "Sold State";
    else if(dynamic_cast<WinnerState*>(this -> state))
        return "Sold State";
    else
        throw StateUndefinedException("The state is undefined.");
}

#endif