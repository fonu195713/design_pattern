#ifndef DINER_MENU_HPP
#define DINER_MENU_HPP

#include "menu.hpp"
#include "../iterator/iterator.hpp"

class DinerMenu : public Menu {
    public:
        static const int MAX_ITEMS = 6;
    
    public:
        int num_of_item;
        Menu** menu_array;
    
    public:
        DinerMenu();

    public:
        void add_item(string name, string description, bool vegetarian, double price);
        Iterator* createIterator() override;
};

#endif