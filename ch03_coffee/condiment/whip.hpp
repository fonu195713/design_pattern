#ifndef WHIP_HPP
#define WHIP_HPP

#include "condiment.hpp"

class Whip : public Condiment {
    public:
        Coffee* coffee;

    public:
        Whip(Coffee* b);
    
    public:
        double cost() override {
            return 0.1 + (this -> coffee -> cost());
        }
    
    public:
        string getDescription() override {
            return this -> coffee -> getDescription() + ", Whip";
        }
};

#endif