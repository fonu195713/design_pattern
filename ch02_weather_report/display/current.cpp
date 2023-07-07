#ifndef CURRENT_HPP
#define CURRENT_HPP

#include "current.hpp"

CurrentDisplay::CurrentDisplay(Subject* subject) {
    this -> weatherData = subject;
    this -> weatherData -> registerObserver(this);
}

#endif