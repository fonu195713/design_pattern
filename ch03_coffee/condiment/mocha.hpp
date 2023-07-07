#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "condiment.hpp"

class Mocha : public Condiment {
    public:
        Coffee* coffee;

    public:
        Mocha(Coffee* b);
    
    public:
        double cost() override {
            return 0.2 + (this -> coffee -> cost());
        }
    
    public:
        string getDescription() override {
            return (this -> coffee -> getDescription()) + ", Mocha";
        }
};

#endif