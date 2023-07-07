#ifndef STATISTICS_CPP
#define STATISTICS_CPP

#include "statistics.hpp"
#include <limits>
using namespace std;

StatisticsDisplay::StatisticsDisplay(Subject* subject) {
    this -> weatherData = subject;
    this -> weatherData -> registerObserver(this);

    this -> count = 0;

    this -> max_temperature = numeric_limits<float>::min();
    this -> min_temperature = numeric_limits<float>::max();
    this -> avg_temperature = 0;

    this -> max_humidity = numeric_limits<float>::min();
    this -> min_humidity = numeric_limits<float>::max();
    this -> avg_humidity = 0;

    this -> max_pressure = numeric_limits<float>::min();
    this -> min_pressure = numeric_limits<float>::max();
    this -> avg_pressure = 0;
}

void StatisticsDisplay::fitstData(float temp, float humidity, float pressure) {
    this -> count = 1;

    this -> max_temperature = temp;
    this -> min_temperature = temp;
    this -> avg_temperature = temp;

    this -> max_humidity = humidity;
    this -> min_humidity = humidity;
    this -> avg_humidity = humidity;

    this -> max_pressure = pressure;
    this -> min_pressure = pressure;
    this -> avg_pressure = pressure;
}

void StatisticsDisplay::updateData(float temp, float humidity, float pressure) {
    int now_c = this -> count;
    int nex_c = now_c + 1;

    this -> max_temperature = (temp > max_temperature)? temp: this -> max_temperature;
    this -> min_temperature = (temp < min_temperature)? temp: this -> min_temperature;
    this -> avg_temperature = (this -> avg_temperature)*now_c/nex_c + temp/nex_c;

    this -> max_humidity = (humidity > max_humidity)? humidity: this -> max_humidity;
    this -> min_humidity = (humidity < min_humidity)? humidity: this -> min_humidity;
    this -> avg_humidity = (this -> avg_humidity)*now_c/nex_c + humidity/nex_c;

    this -> max_pressure = (pressure > max_pressure)? pressure: this -> max_pressure;
    this -> min_pressure = (pressure < min_pressure)? pressure: this -> min_pressure;
    this -> avg_pressure = (this -> avg_pressure)*now_c/nex_c + pressure/nex_c;

    this -> count = this -> count + 1;
}

#endif