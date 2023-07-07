#ifndef GUMBALL_MONITOR_CPP
#define GUMBALL_MONITOR_CPP

#include "gumball_monitor.hpp"
#include "../gumball_machine/gumball_machine.cpp"

#include <iostream>
using namespace std;

GumballMonitor::GumballMonitor(GumballMachine* machine) {
    this -> gumball_machine = machine;
}

void GumballMonitor::report() {
    cout << "Gumball machine: " << (this -> gumball_machine -> location) << endl;
    cout << " - the remaining quantity of gumballs: " << (this -> gumball_machine -> num_of_gumball) << endl;
    cout << " - current state machine: " << (this -> gumball_machine -> state -> name) << endl;
}

#endif