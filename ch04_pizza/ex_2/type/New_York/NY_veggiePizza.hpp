#ifndef NY_VEGGIE_PIZZA_HPP
#define NY_VEGGIE_PIZZA_HPP

#include "../pizza.cpp"

class NY_VeggiePizza : public Pizza {
    public:
        NY_VeggiePizza() {
            name = "NY veggie pizza";
        }
};

#endif