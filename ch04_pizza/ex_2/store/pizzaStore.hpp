#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "../type/pizza.cpp"

#include <string>
using namespace std;

class PizzaStore {
    public:
        Pizza* orderPizza(string sype);
    
    public:
        virtual Pizza* pizzaFactory(string type) = 0;
};

#endif