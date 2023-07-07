#ifndef HOTTUB_HPP
#define HOTTUB_HPP

#include <string>
using namespace std;

class Hottub {
    public:
        string name;
    
    public:
        Hottub(string name);
        
    public:
        void on();
        void off();
};

#endif