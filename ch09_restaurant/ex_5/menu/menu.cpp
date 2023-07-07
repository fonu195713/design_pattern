#ifndef MENU_CPP
#define MENU_CPP

#include "menu.hpp"
#include "menu_component.cpp"
#include "../iterator/menu_iterator.cpp"

#include <iostream>
#include <string>
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

Iterator* Menu::createIterator() {
    vector<MenuComponent*>::iterator begin = (this -> menu_vector).begin();
    vector<MenuComponent*>::iterator end = (this -> menu_vector).end();
    return (new MenuIterator(begin, end));
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