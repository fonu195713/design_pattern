#ifndef HOTTUB_CPP
#define HOTTUB_CPP

#include "hottub.hpp"

#include <iostream>
using namespace std;

Hottub::Hottub(string name) {
    this -> name = name + " hottub";
}

void Hottub::on() {
    cout << (this -> name) << " on." << endl;
}

void Hottub::off() {
    cout << (this -> name) << " off." << endl;
}


#endif