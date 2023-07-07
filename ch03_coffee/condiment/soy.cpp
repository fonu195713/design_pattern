#ifndef SOY_CPP
#define SOY_CPP

#include "soy.hpp"

Soy::Soy(Coffee* b) {
    this -> coffee = b;
    this -> description = this -> coffee -> description;
}

#endif