#ifndef WINNER_STATE_CPP
#define WINNER_STATE_CPP

#include "winner_state.hpp"

#include <iostream>
using namespace std;

class MethidUndefinedException : public exception {
    private:
        string message;

    public:
        explicit MethidUndefinedException(const string& msg) : message(msg) {}

        const char* what() const noexcept override {
            return message.c_str();
        }
};

WinnerState::WinnerState(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void WinnerState::insertQuarter() {
    throw MethidUndefinedException("This method has not been defined");
}

void WinnerState::ejectQuarter() {
    throw MethidUndefinedException("This method has not been defined");
}

void WinnerState::turnCrank() {
    throw MethidUndefinedException("This method has not been defined");
}

void WinnerState::dispense() {
    if(this -> gumball_machine -> gumballs >= 2) {
        cout << "YOU ARE THE WINNER !!! You can get one more gumball !" << endl;
        this -> gumball_machine -> releaseGumball();
        this -> gumball_machine -> releaseGumball();
        this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
    }
    else if(this -> gumball_machine -> gumballs == 1) {
        cout << "A gumball is dispensing now..." << endl;
        this -> gumball_machine -> releaseGumball();
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldOutState());
    }
    
}

#endif