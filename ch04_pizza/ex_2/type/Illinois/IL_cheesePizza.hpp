#ifndef IL_CHEESE_PIZZA_HPP
#define IL_CHEESE_PIZZA_HPP

#include "../pizza.cpp"

class IL_CheesePizza : public Pizza {
    public:
        IL_CheesePizza() {
            name = "IL cheese pizza";
        }
};

#endif