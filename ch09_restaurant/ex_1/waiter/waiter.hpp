#ifndef WAITER_HPP
#define WAITER_HPP

#include <string>
using namespace std;

class Waiter {
    public:
        void printMenu();
        void printBreakfastMenu() {}
        void printLunchMenu() {}
        void printVegetarianMenu() {}
        bool isVegetarian(string name) { return false; }
};

#endif