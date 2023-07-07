#ifndef CA_CLAM_PIZZA_HPP
#define CA_CLAM_PIZZA_HPP

#include "../pizza.cpp"

class CA_ClamPizza : public Pizza {
    public:
        CA_ClamPizza() {
            name = "CA clam pizza";
        }
};

#endif