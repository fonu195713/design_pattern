#ifndef MOCHA_CPP
#define MOCHA_CPP

#include "mocha.hpp"

Mocha::Mocha(Coffee* b) {
    this -> coffee = b;
    this -> description = this -> coffee -> description;
}

#endif