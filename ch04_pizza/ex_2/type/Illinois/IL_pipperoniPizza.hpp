#ifndef IL_PIPPERONI_PIZZA_HPP
#define IL_PIPPERONI_PIZZA_HPP

#include "../pizza.cpp"

class IL_PipperoniPizza : public Pizza {
    public:
        IL_PipperoniPizza() {
            name = "IL pipperoni pizza";
        }
};

#endif