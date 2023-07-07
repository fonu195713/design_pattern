#ifndef HEAT_CPP
#define HEAT_CPP

#include "heat.hpp"

HeatDisplay::HeatDisplay(Subject* subject) {
    this -> weatherData = subject;
    this -> weatherData -> registerObserver(this);
}

#endif