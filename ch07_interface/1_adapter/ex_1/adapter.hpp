#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "duck.hpp"
#include "turkey.hpp"

class Turkey_Adapter : public Duck {
    public:
        Turkey* turkey;

    public:
        Turkey_Adapter(Turkey* turkey);
    
    public:
        void quack() override {
            turkey -> gobble();
        }

        void fly() override {
            turkey -> fly();
        }
};

class Duck_Adapter : public Turkey {
    public:
        Duck* duck;

    public:
        Duck_Adapter(Duck* duck);
    
    public:
        void gobble() override {
            duck -> quack();
        }

        void fly() override {
            duck -> fly();
        }
};

#endif