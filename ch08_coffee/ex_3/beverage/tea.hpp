#ifndef TEA_HPP
#define TEA_HPP

#include "caffeineBeverage.cpp"

class Tea : public CaffeineBeverage {
    public:
        void brew() override;
        void addCondiments() override;
};

#endif