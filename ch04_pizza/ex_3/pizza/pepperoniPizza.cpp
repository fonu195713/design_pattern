#ifndef PEPPERONI_PIZZA_CPP
#define PEPPERONI_PIZZA_CPP

#include "pepperoniPizza.hpp"

PepperoniPizza::PepperoniPizza(IngredientFactory* factory) {
    this -> name = "cheese pizza";
    this -> ingredientFactory = factory;
}

#endif