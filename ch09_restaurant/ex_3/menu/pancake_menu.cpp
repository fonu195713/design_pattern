#ifndef PANCAKE_MENU_CPP
#define PANCAKE_MENU_CPP

#include "pancake_menu.hpp"

#include "menu.cpp"
#include "../iterator/pancake_iterator.cpp"

PancakeMenu::PancakeMenu() {
    menu_list.clear();
    
    this -> add_item("K'B Pancake Breakfast",
        "Pancake with scrambled eggs, and toast",
        true,
        2.99
    );

    this -> add_item("Regular Pancake Breakfast",
        "Pancake with fried eggs, sausage",
        false,
        2.99
    );

    this -> add_item("Blueberry Pancakes",
        "Pancakes made with fresh blueberries",
        true,
        3.49
    );

    this -> add_item("Waffles",
        "Wafiles, with your choice of blueberries or strawberries",
        true,
        3.59
    );
}

void PancakeMenu::add_item(string name, string description, bool vegetarian, double price) {
    Menu* m = new Menu(name, description, vegetarian, price);
    menu_list.push_back(m);
}

Iterator* PancakeMenu::createIterator() {
    Iterator* i = new PancakeIterator(this);
    return i;
}

#endif