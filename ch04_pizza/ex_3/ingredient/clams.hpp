#ifndef CLAMS_HPP
#define CLAMS_HPP

#include "./ingredient.hpp"

class Clams : public Ingredient {};

class Calamari : public Clams {
    public:
        Calamari() {
            this -> name = "Calamari";
        }
};

class FrozenClams : public Clams {
    public:
        FrozenClams() {
            this -> name = "Frozen clams";
        }
};

class FreshClams : public Clams {
    public:
        FreshClams() {
            this -> name = "Fresh clams";
        }
};

#endif