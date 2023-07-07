#ifndef WINNER_STATE_CPP
#define WINNER_STATE_CPP

#include "winner_state.hpp"

#include <iostream>
using namespace std;

WinnerState::WinnerState(GumballMachine* gumball_machine, string name)
    : State(gumball_machine, name) {}

void WinnerState::releaseGumball() {
    // To win the game without informing the player
    if (this -> gumball_machine -> num_of_gumball < 2) {
        cout << "aaaaaaaaaaaaaaaaa" << endl;
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldState());
        this -> gumball_machine -> releaseGumball();
        return;
    }
    
    cout << "YOU ARE THE WINNER !!! You can get one more gumball !" << endl;
    cout << "A gumball is dispensing now..." << endl;
    cout << "A gumball is dispensing now..." << endl;
    this -> gumball_machine -> num_of_gumball -= 2;

    if(this -> gumball_machine -> num_of_gumball == 0)
        this -> gumball_machine -> setState(this -> gumball_machine -> getSoldOutState());
    else
        this -> gumball_machine -> setState(this -> gumball_machine -> getNoQuarterState());
}

#endif