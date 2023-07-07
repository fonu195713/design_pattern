#ifndef CAFFEINE_BEVERAGE_HPP
#define CAFFEINE_BEVERAGE_HPP

class CaffeineBeverage {
    public:
        virtual void prepareRecipe() = 0;
    
    public:
        void boilWater();
        void pourInCup();
};

#endif