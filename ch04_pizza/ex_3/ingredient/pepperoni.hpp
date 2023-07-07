#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP

#include "./ingredient.hpp"

class Pepperoni : public Ingredient {};

class AmericanSausages : public Pepperoni {
    public:
        AmericanSausages() {
            this -> name = "American sausages";
        }
};

class DicedPepperoni : public Pepperoni {
    public:
        DicedPepperoni() {
            this -> name = "Diced pepperoni";
        }
};

class SlicePepperoni : public Pepperoni {
    public:
        SlicePepperoni() {
            this -> name = "Slice pepperoni";
        }
};

#endif