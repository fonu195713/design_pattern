#ifndef IL_VEGGIE_PIZZA_HPP
#define IL_VEGGIE_PIZZA_HPP

#include "../pizza.cpp"

class IL_VeggiePizza : public Pizza {
    public:
        IL_VeggiePizza() {
            name = "IL veggie pizza";
        }
};

#endif