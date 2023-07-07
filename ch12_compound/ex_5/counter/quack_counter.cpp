#ifndef QUACK_COUNTER_CPP
#define QUACK_COUNTER_CPP

#include "quack_counter.hpp"

QuackCounter::QuackCounter(Quackable* q) {
    this -> duck = q;
}

void QuackCounter::quack() {
    this -> duck -> quack();
    QuackCounter::counter += 1;
}

int QuackCounter::getQuacks() {
    return QuackCounter::counter;
}

#endif