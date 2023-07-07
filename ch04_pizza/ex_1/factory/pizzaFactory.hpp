#ifndef PIZZA_FACTORY_HPP
#define PIZZA_FACTORY_HPP

#include "../type/pizza.hpp"

#include <string>
using namespace std;

class PizzaFactory {
    public:
        Pizza* createPizza(string type);
};

#endif