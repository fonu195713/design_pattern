#ifndef NY_PIPPERONI_PIZZA_HPP
#define NY_PIPPERONI_PIZZA_HPP

#include "../pizza.cpp"

class NY_PipperoniPizza : public Pizza {
    public:
        NY_PipperoniPizza() {
            name = "NY pipperoni pizza";
        }
};

#endif