#ifndef FLOCK_CPP
#define FLOCK_CPP

#include "flock.hpp"

Flock::Flock() {
    (this -> duck_vector).clear();
}

void Flock::add(Quackable* duck) {
    (this -> duck_vector).push_back(duck);
}

void Flock::quack() {
    vector<Quackable*>::iterator it;
    for(it = duck_vector.begin(); it != duck_vector.end(); it++) {
        (*it) -> quack();
    }
}

#endif