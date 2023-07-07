#ifndef TEA_CPP
#define TEA_CPP

#include "tea.hpp"

#include <iostream>
using namespace std;

void Tea::prepareRecipe() {
    this -> boilWater();
    this -> steepTeaBag();
    this -> pourInCup();
    this -> addLemon();
}

void Tea::steepTeaBag() {
    cout << "Steeping the tea" << endl;
}

void Tea::addLemon() {
    cout << "Adding lemon" << endl;
}

#endif