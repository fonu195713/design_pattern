#ifndef HEAT_HPP
#define HEAT_HPP

#include "../subject/subject.hpp"
#include "display.hpp"
#include "../observer/observer.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

class HeatDisplay : public Observer, public Display { 
    private:
        Subject* weatherData;
        float headIndex;

    public:
        HeatDisplay(Subject* subject);
    
    public:
        void update(float temp, float humidity, float pressure) override {
            temp = (temp * 9/5) + 32; // *C to *F
            
            this -> headIndex = -42.379 + 2.04901523 * temp + 10.14333127 * humidity
                    - 0.22475541 * temp * humidity - 6.83783e-03 * temp * temp
                    - 5.481717e-02 * humidity * humidity
                    + 1.22874e-03 * temp * temp * humidity
                    + 8.5282e-04 * temp * humidity * humidity
                    - 1.99e-06 * temp * temp * humidity * humidity;

            this -> display();
        }

        void display() override {
            cout << "heat: " << endl;
            cout << "  head index: " << this -> headIndex << endl;
        }
};

#endif