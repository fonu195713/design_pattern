#ifndef NY_CHEESE_PIZZA_HPP
#define NY_CHEESE_PIZZA_HPP

#include "../pizza.cpp"

class NY_CheesePizza : public Pizza {
    public:
        NY_CheesePizza() {
            name = "NY cheese pizza";
        }
};

#endif