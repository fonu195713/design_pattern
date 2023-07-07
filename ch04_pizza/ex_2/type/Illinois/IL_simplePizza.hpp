#ifndef IL_SIMPLE_PIZZA_HPP
#define IL_SIMPLE_PIZZA_HPP

#include "../pizza.cpp"

class IL_SimplePizza : public Pizza {
    public:
        IL_SimplePizza() {
            name = "IL simple pizza";
        }
};

#endif