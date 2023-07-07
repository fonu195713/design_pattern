#ifndef PIZZA_STORE_CPP
#define PIZZA_STORE_CPP

#include "pizzaStore.hpp"

Pizza* PizzaStore::orderPizza(string type) {
    Pizza* pizza = this -> pizzaFactory(type);
    pizza -> prepare();
    pizza -> bake();
    pizza -> cut();
    pizza -> box();

    return pizza;
}

#endif