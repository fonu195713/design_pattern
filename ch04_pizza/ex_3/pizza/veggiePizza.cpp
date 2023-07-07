#ifndef VEGGIE_PIZZA_CPP
#define VEGGIE_PIZZA_CPP

#include "veggiePizza.hpp"

VeggiePizza::VeggiePizza(IngredientFactory* factory) {
    this -> name = "veggie pizza";
    this -> ingredientFactory = factory;
}

#endif