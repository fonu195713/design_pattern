#ifndef PIZZA_FACTORY_CPP
#define PIZZA_FACTORY_CPP

#include "../type/cheesePizza.hpp"
#include "../type/clamPizza.hpp"
#include "../type/pipperoniPizza.hpp"
#include "../type/simplePizza.hpp"
#include "../type/veggiePizza.hpp"

#include "pizzaFactory.hpp"

Pizza* PizzaFactory::createPizza(string type) {
    Pizza* pizza = nullptr;

    if(type == "cheese")
        pizza = new CheesePizza();
    else if(type == "pipperoni")
        pizza = new PipperoniPizza();
    else if(type == "clam")
        pizza = new ClamPizza();
    else if(type == "veggie")
        pizza = new VeggiePizza();
    else
        pizza = new SimplePizza();
    
    return pizza;
}

#endif