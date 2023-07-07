#ifndef WAITER_CPP
#define WAITER_CPP

#include "waiter.hpp"

#include <iostream>
using namespace std;

Waiter::Waiter(MenuComponent* all_menus) {
    this -> all_menus = all_menus;
}

void Waiter::printMenu() {
    all_menus -> print();
}

#endif