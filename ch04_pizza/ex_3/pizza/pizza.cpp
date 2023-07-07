#ifndef PIZZA_CPP
#define PIZZA_CPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

void Pizza::bake() {
    cout << "Bake for 25 minutes at 350." << endl;
}

void Pizza::cut() {
    cout << "Cutting the pizza into 8 slices." << endl;
}

void Pizza::box() {
    cout << "Place pizza in official pizza Store box." << endl;
}

#endif