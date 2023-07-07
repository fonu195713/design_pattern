#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <string>
using namespace std;

class Coffee {
    public:
        string description;

    public:
        virtual string getDescription();
    
    public:
        virtual double cost() = 0;
};

#endif