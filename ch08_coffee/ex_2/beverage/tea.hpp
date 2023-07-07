#ifndef TEA_HPP
#define TEA_HPP

#include "caffeineBeverage.cpp"

class Tea : public CaffeineBeverage {
    public:
        void prepareRecipe() override;
        void steepTeaBag();
        void addLemon();
};

#endif