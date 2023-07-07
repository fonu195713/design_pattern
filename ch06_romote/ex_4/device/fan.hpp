#ifndef FAN_HPP
#define FAN_HPP

#include <string>
using namespace std;

class Fan {
    public:
        static const int OFF = 0;
        static const int LOW = 1;
        static const int MEDIUM = 2;
        static const int HIGH = 3;

    public:
        string name;
        int speed;
    
    public:
        Fan(string name);
        
    public:
        void off();
        void low();
        void medium();
        void high();
        int getSpeed();
};

#endif