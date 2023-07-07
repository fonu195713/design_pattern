#ifndef WAITER_CPP
#define WAITER_CPP

#include "waiter.hpp"
#include "../menu/diner_menu.cpp"
#include "../menu/pancake_menu.cpp"

#include <iostream>
using namespace std;

Waiter::Waiter(DinerMenu* d, PancakeMenu* p) {
    this -> diner_menu = d;
    this -> pancake_menu = p;
}

void Waiter::printMenu() {
    Iterator* diner_iterator   = this -> diner_menu   -> createIterator();
    Iterator* pancake_iterator = this -> pancake_menu -> createIterator();

    cout << "-- Breakfast:" << endl;
    pancake_iterator -> show_all_info();

    cout << "-- Lunch:" << endl;
    diner_iterator -> show_all_info();
}

#endif