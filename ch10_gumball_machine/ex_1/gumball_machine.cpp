#ifndef GUMBALL_MACHINE_CPP
#define GUMBALL_MACHINE_CPP

#include "gumball_machine.hpp"

#include <exception>
#include <iostream>
using namespace std;

class UnknownStateException : public exception {
    private:
        string message;

    public:
        explicit UnknownStateException(const string& msg) : message(msg) {}

        const char* what() const noexcept override {
            return message.c_str();
        }
};

GumballMachine::GumballMachine(int gumballs) {
    this -> gumballs = gumballs;

    if(this -> gumballs == 0)
        this -> state = GumballMachine::SOLD_OUT;    
    else
        this -> state = GumballMachine::NO_QUARTER;    
}

void GumballMachine::insertQuarter() {
    switch (this -> state) {
        case SOLD_OUT:
            cout << "x: (sold out) There are currently no candies." << endl;
            break;
        case NO_QUARTER:
            this -> setState(GumballMachine::HAS_QUARTER);
            cout << "... Put in a quarter" << endl;
            break;
        case HAS_QUARTER:
            cout << "x: (Has quarter) Cannot insert another coin." << endl;
            break;
        case SOLD:
            cout << "x: (Sold) The machine is running, please wait." << endl;
            break;
        default:
            throw UnknownStateException("state machine encountered an unknown state");
            break;
    }
}

void GumballMachine::ejectQuarter() {
    switch (this -> state) {
        case SOLD_OUT:
            cout << "x: (Sold out) You haven't inserted a quarter." << endl;
            break;
        case NO_QUARTER:
            cout << "x: (No quarter) You haven't inserted a quarter." << endl;
            break;
        case HAS_QUARTER:
            this -> setState(GumballMachine::NO_QUARTER);
            cout << "... Quarter returned" << endl;
            break;
        case SOLD:
            cout << "x:(Sold) Sorry, you already turned the crank." << endl;
            break;
        default:
            throw UnknownStateException("state machine encountered an unknown state");
            break;
    }
}

void GumballMachine::turnCrank() {
    switch (this -> state) {
        case SOLD_OUT:
            cout << "x: (Sold out) You turned, but there are no more gumball." << endl;
            break;
        case NO_QUARTER:
            cout << "x: (No quarter) You turned, but there is no quarter." << endl;
            break;
        case HAS_QUARTER:
            this -> setState(GumballMachine::SOLD);
            cout << "... Turning the crank" << endl;
            this -> dispence();
            break;
        case SOLD:
            cout << "x:(Sold) Turning twice cannot get more gumball." << endl;
            break;
        default:
            throw UnknownStateException("state machine encountered an unknown state");
            break;
    }
}

void GumballMachine::dispence() {
    switch (this -> state) {
        case SOLD_OUT:
            cout << "x: (Sold out) No gumball dispenced." << endl;
            break;
        case NO_QUARTER:
            cout << "x: (No quarter) You need to pay first." << endl;
            break;
        case HAS_QUARTER:
            cout << "x: (Sold out) No gumball dispenced." << endl;
            break;
        case SOLD:
            cout << "... a gumball comes rolling out the slot" << endl;
            this -> gumballs -= 1;
            if(this -> gumballs != 0)
                this -> state = GumballMachine::NO_QUARTER;
            else {
                this -> state = GumballMachine::SOLD_OUT;
                cout << "Oops! there is no more gumball here!" << endl;
            }
            break;
        default:
            throw UnknownStateException("state machine encountered an unknown state");
            break;
    }
}

void GumballMachine::setState(int state) {
    this -> state = state;
}

#endif