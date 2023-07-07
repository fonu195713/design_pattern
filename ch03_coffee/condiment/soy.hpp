#ifndef SOY_HPP
#define SOY_HPP

#include "condiment.hpp"

class Soy : public Condiment {
    public:
        Coffee* coffee;

    public:
        Soy(Coffee* b);
    
    public:
        double cost() override {
            return 0.15 + (this -> coffee -> cost());
        }
    
    public:
        string getDescription() override {
            return this -> coffee -> getDescription() + ", Soy";
        }
};

#endif