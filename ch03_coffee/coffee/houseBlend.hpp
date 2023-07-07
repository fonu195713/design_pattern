#ifndef HOUSE_BLEND_HPP
#define HOUSE_BLEND_HPP

#include "coffee.cpp"

class HouseBlend : public Coffee {
    public:
        HouseBlend();
    
    public:
        double cost() override {
            return 1.89;
        }
};

#endif