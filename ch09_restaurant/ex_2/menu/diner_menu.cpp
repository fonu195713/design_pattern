#ifndef DINER_MENU_CPP
#define DINER_MENU_CPP

#include "diner_menu.hpp"

#include "menu.cpp"
#include "../iterator/diner_iterator.cpp"

DinerMenu::DinerMenu() {
    this -> menu_array = new Menu*[6];
    this -> num_of_item = 0;

    this -> add_item("Vegetarian BLT",
        "(Fakin' ) Bacon with lettuce & tomato on whole wheat",
        true,
        2.99
    );

    this -> add_item("BLT",
        "Bacon with lettuce & tomato on whole wheat",
        false,
        2.99
    );

    this -> add_item("Soup of the day",
        "Soup fo the day, with a side of potato salad",
        false,
        3.29
    );

    this -> add_item("Hotdog",
        "A hot dog, with saurkraut, relish, onions, topped with cheese",
        false,
        3.05
    );
}

void DinerMenu::add_item(string name, string description, bool vegetarian, double price) {
    if((this -> num_of_item) < (DinerMenu::MAX_ITEMS)) {
        Menu* m = new Menu(name, description, vegetarian, price);
        (this -> menu_array)[num_of_item] = m;
        this -> num_of_item += 1;
    }
}

Iterator* DinerMenu::createIterator() {
    Iterator* i = new DinerIterator(this);
    return i;
}

#endif