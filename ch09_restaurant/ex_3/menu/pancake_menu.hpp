#ifndef PANCAKE_MENU_HPP
#define PANCAKE_MENU_HPP

#include "menu.hpp"
#include "../iterator/iterator.hpp"

#include <list>
using namespace std;

class PancakeMenu : public Menu {
    public:
        list<Menu*> menu_list;

    public:
        PancakeMenu();
    
    public:
        void add_item(string name, string description, bool vegetarian, double price);
        Iterator* createIterator() override;
};

#endif