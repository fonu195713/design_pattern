#ifndef MENU_CPP
#define MENU_CPP

#include "menu.hpp"

#include <string>
#include <iostream>
using namespace std;

Menu::Menu() {}
Menu::Menu(string name, string description, bool vegetarian, double price) {
    this -> name = name;
    this -> description = description;
    this -> vegetarian = vegetarian;
    this -> price = price;
}

Iterator* Menu::createIterator() {
    return nullptr;
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

void Menu::getInfo() {
    cout << this -> getName() << ", ";
    cout << this -> getDescriptione() << ", ";
    cout << this -> isVegetarian() << ", ";
    cout << this -> getPrice() << endl;
}


#endif