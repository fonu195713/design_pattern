#ifndef VIRTUAL_DUCK_FACTORY_HPP
#define VIRTUAL_DUCK_FACTORY_HPP

#include "../behavior/qucakable.hpp"
#include "../duck/mallard_duck.hpp"
#include "../duck/redhead_duck.hpp"
#include "../duck/duck_call.hpp"
#include "../duck/rubber_duck.hpp"

class VirtualDuckFactory {
    public:
        virtual Quackable* createMallardDuck() = 0;
        virtual Quackable* createRedheadDuck() = 0;
        virtual Quackable* createDuckCall() = 0;
        virtual Quackable* createRubberDuck() = 0;
};

#endif