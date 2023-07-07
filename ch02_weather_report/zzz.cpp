#include <iostream>
#include <vector>
using namespace std;

#include "subject/weatherData.cpp"
#include "display/current.cpp"
#include "display/heat.cpp"
#include "display/statistics.cpp"
#include "display/weather.cpp"

#include "display/display.hpp"


int main(void) {
    WeatherData* weatherData = new WeatherData();

    vector<Display*> list = {
        new CurrentDisplay(weatherData),
        new HeatDisplay(weatherData),
        new StatisticsDisplay(weatherData),
        new WeatherDisplay(weatherData)
    };
    
    cout << "- - - -" << endl;
    while (true) {
        weatherData -> monitor();
        cout << "- - - -" << endl;

        for(int i = 0; i < 25000; i++)
        for(int j = 0; j < 25000; j++) {}
    }
}