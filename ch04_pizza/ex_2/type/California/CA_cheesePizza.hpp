#ifndef CA_CHEESE_PIZZA_HPP
#define CA_CHEESE_PIZZA_HPP

#include "../pizza.cpp"

class CA_CheesePizza : public Pizza {
    public:
        CA_CheesePizza() {
            name = "CA cheese pizza";
        }
};

#endif