#ifndef WAITER_CPP
#define WAITER_CPP

#include "waiter.hpp"

#include <iostream>
using namespace std;

Waiter::Waiter(vector<Menu*> menu_vector) {
    this -> menu_vector = menu_vector;
}

void Waiter::printMenu() {
    for(Menu* menu : menu_vector) {
        cout << endl;
        Iterator* iterator = menu -> createIterator();
        iterator -> show_all_info();
    }
}

#endif