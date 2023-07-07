#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "caffeineBeverage.cpp"

class Coffee : public CaffeineBeverage {
    public:
        void prepareRecipe() override;
        void brewCoffeeGrinds();
        void addSugarAndMilk();
};

#endif