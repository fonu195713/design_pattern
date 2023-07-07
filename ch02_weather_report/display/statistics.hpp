#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include "../subject/subject.hpp"
#include "display.hpp"
#include "../observer/observer.hpp"

#include <iostream>
#include <iomanip>
using namespace std;

class StatisticsDisplay : public Observer, public Display { 
    private:
        float max_temperature;
        float min_temperature;
        float avg_temperature;

        float max_humidity;
        float min_humidity;
        float avg_humidity;

        float max_pressure;
        float min_pressure;
        float avg_pressure;

        Subject* weatherData;
        int count;

    public:
        StatisticsDisplay(Subject* subject);
    
    public:
        void update(float temp, float humidity, float pressure) override {
            if(this -> count == 0)
                this -> fitstData(temp, humidity, pressure);
            else
                this -> updateData(temp, humidity, pressure);
            
            this -> display();
        }

        void display() override {
            cout << "statistics: " << endl;
            cout << "  max_t: " << fixed << setprecision(2) << (this -> max_temperature) << "  ";
            cout << "  min_t: " << fixed << setprecision(2) << (this -> min_temperature) << "  ";
            cout << "  avg_t: " << fixed << setprecision(2) << (this -> avg_temperature) << "  ";
            cout << endl;

            cout << "  max_h: " << fixed << setprecision(2) << (this -> max_humidity) << "  ";
            cout << "  min_h: " << fixed << setprecision(2) << (this -> min_humidity) << "  ";
            cout << "  avg_h: " << fixed << setprecision(2) << (this -> avg_humidity) << "  ";
            cout << endl;

            cout << "  max_p: " << setw(5) << fixed << setprecision(2) << (this -> max_pressure) << "  ";
            cout << "  min_p: " << setw(5) << fixed << setprecision(2) << (this -> min_pressure) << "  ";
            cout << "  avg_p: " << setw(5) << fixed << setprecision(2) << (this -> avg_pressure) << "  ";
            cout << endl;
        }
    
    private:
        void fitstData(float temp, float humidity, float pressure);
        void updateData(float temp, float humidity, float pressure);
};

#endif