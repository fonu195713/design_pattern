#ifndef DOUGH_HPP
#define DOUGH_HPP

#include "./ingredient.hpp"

class Dough : public Ingredient {};

class VeryThinCrust : public Dough {
    public:
        VeryThinCrust() {
            this -> name = "Very thin crust";
        }
};

class ThickCrustDough : public Dough {
    public:
        ThickCrustDough() {
            this -> name = "Thick crust dough";
        }
};

class ThinCrustDough : public Dough {
    public:
        ThinCrustDough() {
            this -> name = "Thin crust dough";
        }
};

#endif