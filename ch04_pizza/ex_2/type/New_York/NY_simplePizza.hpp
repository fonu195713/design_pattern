#ifndef NY_SIMPLE_PIZZA_HPP
#define NY_SIMPLE_PIZZA_HPP

#include "../pizza.cpp"

class NY_SimplePizza : public Pizza {
    public:
        NY_SimplePizza() {
            name = "NY simple pizza";
        }
};

#endif