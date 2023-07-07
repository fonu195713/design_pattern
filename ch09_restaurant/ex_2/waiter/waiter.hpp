#ifndef WAITER_HPP
#define WAITER_HPP

#include "../menu/diner_menu.hpp"
#include "../menu/pancake_menu.hpp"

class Waiter {
    public:
        Menu* diner_menu;
        Menu* pancake_menu;
    
    public:
        Waiter(DinerMenu* d, PancakeMenu* p);

    public:
        void printMenu();
        /* *** todo:
        void printBreakfastMenu() {}
        void printLunchMenu() {}
        void printVegetarianMenu() {}
        bool isVegetarian(string name) { return false; }
        *** */
};

#endif