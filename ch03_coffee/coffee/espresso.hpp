#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "coffee.cpp"

class Espresso : public Coffee {
    public:
        Espresso();
    
    public:
        double cost() override {
            return 1.99;
        }
};

#endif