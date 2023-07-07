#ifndef IL_CLAM_PIZZA_HPP
#define IL_CLAM_PIZZA_HPP

#include "../pizza.cpp"

class IL_ClamPizza : public Pizza {
    public:
        IL_ClamPizza() {
            name = "IL clam pizza";
        }
};

#endif