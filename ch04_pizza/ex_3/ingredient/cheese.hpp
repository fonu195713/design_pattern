#ifndef CHEESE_HPP
#define CHEESE_HPP

#include "./ingredient.hpp"

class Cheese : public Ingredient {};

class CoatCheese : public Cheese {
    public:
        CoatCheese() {
            this -> name = "Coat cheese";
        }
};

class MozzarellaCheese : public Cheese {
    public:
        MozzarellaCheese() {
            this -> name = "Mozzarella cheese";
        }
};

class ReggianoCheese : public Cheese {
    public:
        ReggianoCheese() {
            this -> name = "Reggiano cheese";
        }
};

#endif