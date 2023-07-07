#ifndef DARK_ROAST_HPP
#define DARK_ROAST_HPP

#include "coffee.cpp"

class DarkRoast : public Coffee {
    public:
        DarkRoast();
    
    public:
        double cost() override {
            return 1.79;
        }
};

#endif