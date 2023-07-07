#ifndef CAFE_MENU_CPP
#define CAFE_MENU_CPP

#include "cafe_menu.hpp"

#include "menu.cpp"
#include "../iterator/cafe_iterator.cpp"

Node::Node() {
    this -> menu = nullptr;
    this -> next = nullptr;
}

CafeMenu::CafeMenu() {
    this -> head_node = nullptr;
    this -> tail_node = nullptr;
    
    this -> add_item("Veggie Burger and Air Fries",
        "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
        true,
        3.99
    );

    this -> add_item("Soup of the day",
        "A cup of the soup of the day, with a salad",
        false,
        3.69
    );

    this -> add_item("Burrito",
        "A large burrito, with whole pinto beans, salsa, guacamole",
        true,
        4.29
    );
}

void CafeMenu::add_item(string name, string description, bool vegetarian, double price) {
    Node* n = new Node();
    n -> menu = new Menu(name, description, vegetarian, price);
    
    if(this -> tail_node == nullptr) {
        this -> head_node = n;
        this -> tail_node = n;
    }
    else {
        this -> tail_node -> next = n;
        this -> tail_node = n;
    }
}

Iterator* CafeMenu::createIterator() {
    Iterator* i = new CafeIterator(this);
    return i;
}

#endif