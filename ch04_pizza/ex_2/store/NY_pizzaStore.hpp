#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "pizzaStore.cpp"
#include "../type/New_York/NY_cheesePizza.hpp"
#include "../type/New_York/NY_PipperoniPizza.hpp"
#include "../type/New_York/NY_clamPizza.hpp"
#include "../type/New_York/NY_VeggiePizza.hpp"
#include "../type/New_York/NY_SimplePizza.hpp"

class NY_PizzaStore : public PizzaStore {
    public:
        Pizza* pizzaFactory(string type) override {
            Pizza* pizza = nullptr;

            if(type == "cheese")
                pizza = new NY_CheesePizza();
            else if(type == "pipperoni")
                pizza = new NY_PipperoniPizza();
            else if(type == "clam")
                pizza = new NY_ClamPizza();
            else if(type == "veggie")
                pizza = new NY_VeggiePizza();
            else
                pizza = new NY_SimplePizza();
            
            return pizza;
        }
};

#endif