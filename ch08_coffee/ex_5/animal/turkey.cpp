#ifndef TURKEY_CPP
#define TURKEY_CPP

#include "turkey.hpp"

#include <string>
using namespace std;

Turkey::Turkey(string name, float weight) {
    this -> name = name;
    this -> weight = weight;
}

Turkey::State Turkey::compareTo(Turkey turkey) {
    string s1 = this -> name;
    string s2 = turkey.name;

    if(s1 == s2)
        return State::same;
    else if(s1 < s2)
        return State::less_than;
    else
        return State::greater;
}

string Turkey::toString() {
    return ("duck name: " + (this -> name) + ", weight: " + to_string(this -> weight));
}

#endif