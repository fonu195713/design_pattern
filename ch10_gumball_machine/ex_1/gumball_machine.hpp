#ifndef GUMBALL_MACHINE_HPP
#define GUMBALL_MACHINE_HPP

class GumballMachine {
    public:
        static const int SOLD_OUT = 0;
        static const int NO_QUARTER = 1;
        static const int HAS_QUARTER = 2;
        static const int SOLD = 3;

    public:
        int state;
        int gumballs;
    
    public:
        GumballMachine(int gumballs);
    
    public:
        void insertQuarter();
        void ejectQuarter();
        void turnCrank();
        void dispence();
        void setState(int state);
};

#endif