#ifndef TELEVISION_CPP
#define TELEVISION_CPP

#include "television.hpp"

#include <iostream>
using namespace std;

Television::Television(string name) {
    this -> name = name + " TV";
}

void Television::on() {
    cout << (this -> name) << " on." << endl;
}

void Television::off() {
    cout << (this -> name) << " off." << endl;
}


#endif