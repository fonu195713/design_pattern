#ifndef WAITER_CPP
#define WAITER_CPP

#include "waiter.hpp"
#include "../menu/menu_component.cpp"

#include <iostream>
using namespace std;

Waiter::Waiter(MenuComponent* all_menus) {
    this -> all_menus = all_menus;
}

void Waiter::printMenu() {
    all_menus -> print();
}

void Waiter::printVegetarianMenu() {
    Iterator* iterator = all_menus -> createIterator();
    cout << "[vegetarian menu]" << endl;
    while(iterator -> hasNext()) {
        MenuComponent* component = (MenuComponent*)(iterator -> next());
        try {
            if(component -> isVegetarian()) {
                component -> print();
            }
        }
        catch(const UnsupportedOperationException& e) {}
    }
}

#endif