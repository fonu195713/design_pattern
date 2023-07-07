#ifndef DUCK_CPP
#define DUCK_CPP

#include "duck.hpp"

#include <string>
using namespace std;

Duck::Duck(string name, float weight) {
    this -> name = name;
    this -> weight = weight;
}

Duck::State Duck::compareTo(Duck duck) {
    float w1 = this -> weight;
    float w2 = duck.weight;

    if(w1 == w2)
        return State::same;
    else if(w1 < w2)
        return State::less_than;
    else
        return State::greater;
}

string Duck::toString() {
    return ("duck name: " + (this -> name) + ", weight: " + to_string(this -> weight));
}

#endif