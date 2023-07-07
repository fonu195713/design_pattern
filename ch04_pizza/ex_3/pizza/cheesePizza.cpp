#ifndef CHEESE_PIZZA_CPP
#define CHEESE_PIZZA_CPP

#include "cheesePizza.hpp"

CheesePizza::CheesePizza(IngredientFactory* factory) {
    this -> name = "cheese pizza";
    this -> ingredientFactory = factory;
}

#endif