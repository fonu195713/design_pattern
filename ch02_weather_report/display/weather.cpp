#ifndef WEATHER_CPP
#define WEATHER_CPP

#include "weather.hpp"

WeatherDisplay::WeatherDisplay(Subject* subject) {
    this -> weatherData = subject;
    this -> weatherData -> registerObserver(this);
}
#endif