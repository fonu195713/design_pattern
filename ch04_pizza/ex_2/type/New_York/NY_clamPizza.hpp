#ifndef NY_CLAM_PIZZA_HPP
#define NY_CLAM_PIZZA_HPP

#include "../pizza.cpp"

class NY_ClamPizza : public Pizza {
    public:
        NY_ClamPizza() {
            name = "NY clam pizza";
        }
};

#endif