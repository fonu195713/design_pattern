#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "../factory/pizzaFactory.hpp"

#include <string>
using namespace std;

class PizzaStore {
    public:
        PizzaFactory* factory;
    
    public:
        PizzaStore(PizzaFactory* factory);

    public:
        Pizza* orderPizza(string type);
};

#endif