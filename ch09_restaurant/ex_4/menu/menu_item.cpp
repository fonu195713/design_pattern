#ifndef MENU_ITEM_CPP
#define MENU_ITEM_CPP

#include "menu_component.cpp"
#include "menu_item.hpp"

#include <iostream>
#include <string>
using namespace std;

MenuItem::MenuItem(string name, string description, bool vegetarian, double price) {
    this -> name = name;
    this -> description = description;
    this -> vegetarian = vegetarian;
    this -> price = price;
}

string MenuItem::getName() {
    return (this -> name);
}

string MenuItem::getDescription() {
    return (this -> description);
}

bool MenuItem::isVegetarian() {
    return (this -> vegetarian);
}

double MenuItem::getPrice() {
    return (this -> price);
}

void MenuItem::print() {
    cout << "  " << this -> name << " ";

    if(this -> isVegetarian()) {
        cout << "(v) ";
    }

    cout << "-> " << this -> description << ". ";
    cout << "($" << this -> price << ")" << endl;
}

#endif