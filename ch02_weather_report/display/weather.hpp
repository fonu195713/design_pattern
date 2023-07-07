#ifndef WEATHER_HPP
#define WEATHER_HPP

#include "../subject/subject.hpp"
#include "display.hpp"
#include "../observer/observer.hpp"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class WeatherDisplay : public Observer, public Display { 
    private:
        float pressure;
        string weather;
        Subject* weatherData;

    public:
        WeatherDisplay(Subject* subject);
    
    public:
        void update(float temp, float humidity, float pressure) override {
            this -> pressure = pressure;

            if(this -> pressure >= 1.1)
                weather = "very sunny day";
            else if(this -> pressure >= 1)
                weather = "sunny day";
            else if(this -> pressure >= 0.95)
                weather = "cloudy day";
            else if(this -> pressure >= 0.9)
                weather = "rainy day";
            else
                weather = "big rainy day";

            
            this -> display();
        }

        void display() override {
            cout << "weather: " << endl;
            cout << "  It's " << weather << endl;
        }
};

#endif