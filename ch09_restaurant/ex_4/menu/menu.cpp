#ifndef MENU_CPP
#define MENU_CPP

#include "menu_component.cpp"
#include "menu.hpp"

#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

Menu::Menu(string name, string description) {
    (this -> menu_vector).clear();
    this -> name = name;
    this -> description = description;
}

void Menu::add(MenuComponent* component) {
    (this -> menu_vector).push_back(component);
}

MenuComponent* Menu::getChild(int i) {
    return menu_vector[i];
}

string Menu::getName() {
    return (this -> name);
}

string Menu::getDescription() {
    return (this -> description);
}

void Menu::print() {
    cout << endl;
    cout << "Menu '" << getName() << "', " << getDescription() << endl;
    cout << "-------------------" << endl;
    
    // menu_vector iterator
    for (auto& element : menu_vector) {
        element -> print();
    }
}

#endif