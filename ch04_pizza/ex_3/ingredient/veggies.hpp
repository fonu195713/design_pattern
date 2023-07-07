#ifndef VEGGIES_HPP
#define VEGGIES_HPP

#include "ingredient.hpp"

class Veggies : public Ingredient {};

class Corn : public Veggies {
    public:
        Corn() {
            this -> name = "Corn";
        }
};

class Artichoke : public Veggies {
    public:
        Artichoke() {
            this -> name = "Artichoke";
        }
};

class Zucchini : public Veggies {
    public:
        Zucchini() {
            this -> name = "Zucchini";
        }
};

class CaramelizedOnion : public Veggies {
    public:
        CaramelizedOnion() {
            this -> name = "Caramelized onion";
        }
};

class BellPepper : public Veggies {
    public:
        BellPepper() {
            this -> name = "Bell pepper";
        }
};

class Tomato : public Veggies {
    public:
        Tomato() {
            this -> name = "Tomato";
        }
};

class Olives : public Veggies {
    public:
        Olives() {
            this -> name = "Olives";
        }
};

class Mushroom : public Veggies {
    public:
        Mushroom()  {
            this -> name = "Mushroom";
        }
};

class Garlic : public Veggies {
    public:
        Garlic() {
            this -> name = "Garlic";
        }
};

class Onion : public Veggies {
    public:
        Onion() {
            this -> name = "Onion";
        }
};

class RedPepper : public Veggies {
    public:
        RedPepper() {
            this -> name = "Red pepper";
        }
};

#endif