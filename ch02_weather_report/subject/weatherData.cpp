#ifndef WEATHER_DATA_CPP
#define WEATHER_DATA_CPP

#include "weatherData.hpp"

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

#include <chrono>
using namespace std::chrono;

WeatherData::WeatherData() {
    this -> temperature = 25.0;
    this -> humidity = 35.0;
    this -> pressure = 1.0;
    this -> list = {};
}

void WeatherData::monitor() {
    mt19937 gen(system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(1, 100);

    int rnd = distribution(gen);
    
    if(rnd % 2 == 0) {
        this -> getTemperature();
        this -> measurementsChanged();
    }
    else if(rnd % 3 == 0) {
        this -> getHumidity();
        this -> measurementsChanged();
    }
    else if(rnd % 5 == 0) {
        this -> getPressure();
        this -> measurementsChanged();
    }
}

void WeatherData::getTemperature() {
    mt19937 gen(system_clock::now().time_since_epoch().count());
    uniform_real_distribution<double> distribution(20.0, 30.0);
    this -> temperature = distribution(gen);
}

void WeatherData::getHumidity() {
    mt19937 gen(system_clock::now().time_since_epoch().count());
    uniform_real_distribution<double> distribution(30.0, 40.0);
    this -> humidity = distribution(gen);
}

void WeatherData::getPressure() {
    mt19937 gen(system_clock::now().time_since_epoch().count());
    uniform_real_distribution<double> distribution(0.8, 1.2);
    this -> pressure = distribution(gen);
}

void WeatherData::measurementsChanged() {
    this -> notifyObservers();
}

#endif