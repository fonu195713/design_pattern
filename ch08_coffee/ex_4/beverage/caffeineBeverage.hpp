#ifndef CAFFEINE_BEVERAGE_HPP
#define CAFFEINE_BEVERAGE_HPP

class CaffeineBeverage {
    public:
        virtual void brew() = 0;
        virtual void addCondiments() = 0;

    public:
        virtual bool wantsCondiments();

    public:
        void prepareRecipe();
        void boilWater();
        void pourInCup();
};

#endif