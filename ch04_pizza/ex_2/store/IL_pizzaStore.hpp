#ifndef IL_PIZZA_STORE_HPP
#define IL_PIZZA_STORE_HPP

#include "pizzaStore.cpp"
#include "../type/Illinois/IL_cheesePizza.hpp"
#include "../type/Illinois/IL_PipperoniPizza.hpp"
#include "../type/Illinois/IL_clamPizza.hpp"
#include "../type/Illinois/IL_VeggiePizza.hpp"
#include "../type/Illinois/IL_SimplePizza.hpp"

class IL_PizzaStore : public PizzaStore {
    public:
        Pizza* pizzaFactory(string type) override {
            Pizza* pizza = nullptr;

            if(type == "cheese")
                pizza = new IL_CheesePizza();
            else if(type == "pipperoni")
                pizza = new IL_PipperoniPizza();
            else if(type == "clam")
                pizza = new IL_ClamPizza();
            else if(type == "veggie")
                pizza = new IL_VeggiePizza();
            else
                pizza = new IL_SimplePizza();
            
            return pizza;
        }
};

#endif