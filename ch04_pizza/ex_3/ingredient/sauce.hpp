#ifndef SAUCE_HPP
#define SAUCE_HPP

#include "ingredient.hpp"

class Sauce : public Ingredient {};

class BruschettaSauce : public Sauce {
    public:
        BruschettaSauce() {
            this -> name = "Bruschetta sauce";
        }
};

class PlumTomatoSauce : public Sauce {
    public:
        PlumTomatoSauce() {
            this -> name = "Plum tomato sauce";
        }
};

class MarinaraSauce : public Sauce {
    public:
        MarinaraSauce() {
            this -> name = "Marinara sauce";
        }
};

#endif