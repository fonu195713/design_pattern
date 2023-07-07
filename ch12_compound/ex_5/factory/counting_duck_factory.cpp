#ifndef COUNTING_DUCK_FACTORY_CPP
#define COUNTING_DUCK_FACTORY_CPP

#include "counting_duck_factory.hpp"
#include "../duck/mallard_duck.cpp"
#include "../duck/redhead_duck.cpp"
#include "../duck/duck_call.cpp"
#include "../duck/rubber_duck.cpp"
#include "../counter/quack_counter.cpp"

Quackable* CountingDuckFactory::createMallardDuck() {
    return (new QuackCounter(new MallardDuck())) ;
}

Quackable* CountingDuckFactory::createRedheadDuck() {
    return (new QuackCounter(new RedheadDuck())) ;
}

Quackable* CountingDuckFactory::createDuckCall() {
    return (new QuackCounter(new DuckCall())) ;
}

Quackable* CountingDuckFactory::createRubberDuck() {
    return (new QuackCounter(new RubberDuck())) ;
}

#endif