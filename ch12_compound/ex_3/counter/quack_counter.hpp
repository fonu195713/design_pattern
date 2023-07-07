#ifndef QUACK_COUNTER_HPP
#define QUACK_COUNTER_HPP

#include "../behavior/qucakable.hpp"

class QuackCounter : public Quackable {
    public:
        static int counter;

    public:
        Quackable* duck;
    
    public:
        QuackCounter(Quackable* q);

    public:
        void quack();
    
    public:
        static int getQuacks();
};

#endif