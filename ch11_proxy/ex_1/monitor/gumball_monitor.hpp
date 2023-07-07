#ifndef GUMBALL_MONITOR_HPP
#define GUMBALL_MONITOR_HPP

#include "../gumball_machine/gumball_machine.hpp"

class GumballMonitor {
    public:
        GumballMachine* gumball_machine;
    
    public:
        GumballMonitor(GumballMachine* machine);
    
    public:
        void report();
};

#endif