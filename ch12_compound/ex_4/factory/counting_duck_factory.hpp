#ifndef COUNTING_DUCK_FACTORY_HPP
#define COUNTING_DUCK_FACTORY_HPP

#include "virtual_duck_factory.hpp"
#include "../counter/quack_counter.hpp"

class CountingDuckFactory : public VirtualDuckFactory {
    public:
        Quackable* createMallardDuck() override;
        Quackable* createRedheadDuck() override;
        Quackable* createDuckCall() override;
        Quackable* createRubberDuck() override;
};

#endif