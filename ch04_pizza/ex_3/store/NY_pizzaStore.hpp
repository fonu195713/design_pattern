#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "pizzaStore.cpp"
#include "../factory/NY_ingredientFactory.hpp"
#include "../pizza/cheesePizza.cpp"
#include "../pizza/clamPizza.cpp"
#include "../pizza/pepperoniPizza.cpp"
#include "../pizza/simplePizza.cpp"
#include "../pizza/veggiePizza.cpp"

class NY_PizzaStore : public PizzaStore {
    public:
        Pizza* pizzaFactory(string type) override {
            IngredientFactory* factory = new NY_IngredientFactory();
            Pizza* pizza = nullptr;

            if(type == "cheese")
                pizza = new CheesePizza(factory);
            else if(type == "pipperoni")
                pizza = new PepperoniPizza(factory);
            else if(type == "clam")
                pizza = new ClamPizza(factory);
            else if(type == "veggie")
                pizza = new VeggiePizza(factory);
            else
                pizza = new SimplePizza(factory);

            return pizza;
        }
};

#endif