#ifndef CA_SIMPLE_PIZZA_HPP
#define CA_SIMPLE_PIZZA_HPP

#include "../pizza.cpp"

class CA_SimplePizza : public Pizza {
    public:
        CA_SimplePizza() {
            name = "CA simple pizza";
        }
};

#endif