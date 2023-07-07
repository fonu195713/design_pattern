#ifndef CA_PIPPERONI_PIZZA_HPP
#define CA_PIPPERONI_PIZZA_HPP

#include "../pizza.cpp"

class CA_PipperoniPizza : public Pizza {
    public:
        CA_PipperoniPizza() {
            name = "CA pipperoni pizza";
        }
};

#endif