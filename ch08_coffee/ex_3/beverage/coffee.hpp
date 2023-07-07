#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "caffeineBeverage.cpp"

class Coffee : public CaffeineBeverage {
    public:
        void brew() override;
        void addCondiments() override;
};

#endif