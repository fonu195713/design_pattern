#ifndef CURRENT_CPP
#define CURRENT_CPP

#include "../subject/subject.hpp"
#include "display.hpp"
#include "../observer/observer.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

class CurrentDisplay : public Observer, public Display { 
    private:
        float temperature;
        float humidity;
        float pressure;
        Subject* weatherData;

    public:
        CurrentDisplay(Subject* subject);
    
    public:
        void update(float temp, float humidity, float pressure) override {
            this -> temperature = temp;
            this -> humidity = humidity;
            this -> pressure = pressure;
            this -> display();
        }

        void display() override {
            cout << "current: " << endl;
            cout << "  t: " << fixed << setprecision(2) << (this -> temperature) << " ";
            cout << "  h: " << fixed << setprecision(2) << (this -> humidity) << " ";
            cout << "  p: " << fixed << setprecision(2) << (this -> pressure) << endl;
        }
};

#endif