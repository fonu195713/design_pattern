#ifndef CAFE_MENU_HPP
#define CAFE_MENU_HPP

#include "menu.hpp"
#include "../iterator/iterator.hpp"

class Node {
    public:
        Node();

    public:
        Menu* menu;
        Node* next;
};

class CafeMenu : public Menu {
    public:
        Node* head_node;
        Node* tail_node;

    public:
        CafeMenu();
    
    public:
        void add_item(string name, string description, bool vegetarian, double price);
        Iterator* createIterator() override;
};

#endif