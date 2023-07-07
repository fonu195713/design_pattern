#ifndef PIZZA_HPP
#define PIZZA_HPP

#include "../ingredient/cheese.hpp"
#include "../ingredient/clams.hpp"
#include "../ingredient/dough.hpp"
#include "../ingredient/pepperoni.hpp"
#include "../ingredient/sauce.hpp"
#include "../ingredient/veggies.hpp"

#include <string>
#include <vector>
using namespace std;

class Pizza {
    public:
        string name;
        Dough* dough;
        Sauce* sauce;
        vector<Veggies*> veggies;
        Cheese* cheese;
        Clams* clam;
    
    public:
        virtual void prepare() = 0;
    
    public:
        virtual void bake();
        virtual void cut();
        virtual void box();
};

#endif