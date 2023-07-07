#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>
using namespace std;

class Pizza {
    public:
        string name;
    
    public:
        void prepare();
        void bake();
        void cut();
        void box();
};

#endif