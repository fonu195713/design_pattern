#ifndef WAITER_HPP
#define WAITER_HPP

#include "../menu/menu.hpp"

#include <vector>
using namespace std;

class Waiter {
    public:
        vector<Menu*> menu_vector;
    
    public:
        Waiter(vector<Menu*> menu_vector);

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