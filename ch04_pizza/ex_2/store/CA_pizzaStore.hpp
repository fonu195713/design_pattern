#ifndef CA_PIZZA_STORE_HPP
#define CA_PIZZA_STORE_HPP

#include "pizzaStore.cpp"
#include "../type/California/CA_cheesePizza.hpp"
#include "../type/California/CA_PipperoniPizza.hpp"
#include "../type/California/CA_clamPizza.hpp"
#include "../type/California/CA_VeggiePizza.hpp"
#include "../type/California/CA_SimplePizza.hpp"

class CA_PizzaStore : public PizzaStore {
    public:
        Pizza* pizzaFactory(string type) override {
            Pizza* pizza = nullptr;

            if(type == "cheese")
                pizza = new CA_CheesePizza();
            else if(type == "pipperoni")
                pizza = new CA_PipperoniPizza();
            else if(type == "clam")
                pizza = new CA_ClamPizza();
            else if(type == "veggie")
                pizza = new CA_VeggiePizza();
            else
                pizza = new CA_SimplePizza();
            
            return pizza;
        }
};

#endif