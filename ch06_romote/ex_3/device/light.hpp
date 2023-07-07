#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <string>
using namespace std;

class Light {
    public:
        string name;
    
    public:
        Light(string name);

    public:
        void on();
        void off();
};

#endif