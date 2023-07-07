#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "caffeineBeverage.cpp"

class Coffee : public CaffeineBeverage {
    public:
        bool wantsAdd;

    public:
        Coffee();

    public:
        void brew() override;
        bool wantsCondiments() override;
        void addCondiments() override;
    
    public:
        void setCondiments(bool b);
};

#endif