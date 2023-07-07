#include "gumball_machine.cpp"

#include <iostream>
using namespace std;

int main(void) {
    GumballMachine* gumball_machine = new GumballMachine(5);

    gumball_machine -> insertQuarter();
    gumball_machine -> turnCrank();  // 4 more candies

    gumball_machine -> insertQuarter();
    gumball_machine -> ejectQuarter();
    gumball_machine -> insertQuarter();
    gumball_machine -> turnCrank();  // 3 more candies

    gumball_machine -> insertQuarter();
    gumball_machine -> turnCrank();  // 2 more candies

    gumball_machine -> insertQuarter();
    gumball_machine -> turnCrank();  // 1 more candy

    gumball_machine -> ejectQuarter(); // error !!

    gumball_machine -> insertQuarter();
    gumball_machine -> insertQuarter(); // error !!
    gumball_machine -> turnCrank(); // no more candies
    
    gumball_machine -> insertQuarter(); // error !!
    gumball_machine -> turnCrank(); // error !!
}