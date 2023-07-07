#ifndef MENU_CPP
#define MENU_CPP

#include "menu.hpp"

Menu::Menu() {}
Menu::Menu(string name, string description, bool vegetarian, double price) {
    this -> name = name;
    this -> description = description;
    this -> vegetarian = vegetarian;
    this -> price = price;
}

string Menu::getName() {
    return (this -> name);
}

string Menu::getDescriptione() {
    return (this -> description);
}

bool Menu::isVegetarian() {
    return (this -> vegetarian);
}

double Menu::getPrice() {
    return (this -> price);
}

#endif