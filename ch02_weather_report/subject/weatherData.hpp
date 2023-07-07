#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include "subject.hpp"
#include "../observer/observer.hpp"

#include <vector>
#include <algorithm>
using namespace std;

class WeatherData : public Subject {
    private:
        float temperature;
        float humidity;
        float pressure;
        vector<Observer*> list;

    public:
        WeatherData();
    
    public:
        void registerObserver(Observer* o) override {
            list.push_back(o);
        }

        void removeObserver(Observer* o) override {
            list.erase(remove(list.begin(), list.end(), o), list.end());
        }

        void notifyObservers() override {
            for(Observer* o : list) {
                o -> update(temperature, humidity, pressure);
            }
        }
    
    public:
        void monitor();
    
    private:
        void getTemperature();
        void getHumidity();
        void getPressure();
        void measurementsChanged();
};

#endif