#ifndef WAITER_HPP
#define WAITER_HPP

#include "../menu/menu_component.hpp"

class Waiter {
    public:
        MenuComponent* all_menus;

    public:
        Waiter(MenuComponent* all_menus);
    
    public:
        void printMenu();
        void printVegetarianMenu();
};

#endif