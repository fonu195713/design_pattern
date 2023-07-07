#ifndef DECA_HPP
#define DECA_HPP

#include "coffee.cpp"

class Deca : public Coffee {
    public:
        Deca();
    
    public:
        double cost() override {
            return 1.59;
        }
};

#endif