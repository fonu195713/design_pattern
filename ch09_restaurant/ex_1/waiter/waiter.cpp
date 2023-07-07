#ifndef WAITER_CPP
#define WAITER_CPP

#include "../menu/diner_menu.cpp"
#include "../menu/pancake_menu.cpp"
#include "waiter.hpp"

#include <iostream>
#include <list>
#include <string>
using namespace std;

void Waiter::printMenu() {
    DinerMenu* diner_menu = new DinerMenu();
    Menu** menu1 = diner_menu -> get_menu_array();
    cout << endl;
    
    cout << "DinerMenu:" << endl;
    for(int i = 0; i < DinerMenu::MAX_ITEMS; i++) {
        if(i < (diner_menu -> num_of_item)) {
            Menu* m = menu1[i];
            cout << m -> getName() << ", ";
            cout << m -> getDescriptione() << ", ";
            cout << m -> isVegetarian() << ", ";
            cout << m -> getPrice() << endl;
        }
    }
    cout << endl;
    
    PancakeMenu* pancake_menu = new PancakeMenu();
    list<Menu*> menu2 = pancake_menu -> get_menu_item();
    
    cout << "PancakeMenu:" << endl;
    for(Menu* m : menu2) {
        cout << m -> getName() << ", ";
        cout << m -> getDescriptione() << ", ";
        cout << m -> isVegetarian() << ", ";
        cout << m -> getPrice() << endl;
    }
    cout << endl;
}

#endif