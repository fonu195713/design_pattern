#ifndef WHIP_CPP
#define WHIP_CPP

#include "whip.hpp"

Whip::Whip(Coffee* b) {
    this -> coffee = b;
    this -> description = this -> coffee -> description;
}

#endif