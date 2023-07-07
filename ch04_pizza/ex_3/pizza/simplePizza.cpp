#ifndef SIMPLE_PIZZA_CPP
#define SIMPLE_PIZZA_CPP

#include "simplePizza.hpp"

SimplePizza::SimplePizza(IngredientFactory* factory) {
    this -> name = "simple pizza";
    this -> ingredientFactory = factory;
}

#endif