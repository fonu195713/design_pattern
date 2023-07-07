#ifndef CLAM_PIZZA_CPP
#define CLAM_PIZZA_CPP

#include "clamPizza.hpp"

ClamPizza::ClamPizza(IngredientFactory* factory) {
    this -> name = "clam pizza";
    this -> ingredientFactory = factory;
}

#endif