#ifndef CA_VEGGIE_PIZZA_HPP
#define CA_VEGGIE_PIZZA_HPP

#include "../pizza.cpp"

class CA_VeggiePizza : public Pizza {
    public:
        CA_VeggiePizza() {
            name = "CA veggie pizza";
        }
};

#endif