#ifndef COFFEE_CPP
#define COFFEE_CPP

#include "coffee.hpp"

#include <iostream>
using namespace std;

void Coffee::prepareRecipe() {
    this -> boilWater();
    this -> brewCoffeeGrinds();
    this -> pourInCup();
    this -> addSugarAndMilk();
}

void Coffee::boilWater() {
    cout << "Boiling water" << endl;
}

void Coffee::brewCoffeeGrinds() {
    cout << "Dripping coffee through filter" << endl;
}

void Coffee::pourInCup() {
    cout << "Pouring into cup" << endl;
}

void Coffee::addSugarAndMilk() {
    cout << "Adding sugar and milk" << endl;
}


#endif