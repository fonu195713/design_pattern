#ifndef PIZZA_STORE_CPP
#define PIZZA_STORE_CPP


#include "pizzaStore.hpp"

PizzaStore::PizzaStore(PizzaFactory* factory) {
    factory = factory;
}

Pizza* PizzaStore::orderPizza(string type) {
    Pizza* pizza = factory -> createPizza(type);
    
    pizza -> prepare();
    pizza -> bake();
    pizza -> cut();
    pizza -> box();

    return pizza;
}

#endif