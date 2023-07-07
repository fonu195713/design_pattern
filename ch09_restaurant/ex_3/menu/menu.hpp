#ifndef MENU_HPP
#define MENU_HPP

#include "../iterator/iterator.hpp"

#include <string>
using namespace std;

class Menu {
    public:
        string name;
        string description;
        bool vegetarian;
        double price;
    
    public:
        Menu();
        Menu(string name, string description, bool vegetarian, double price);

    public:
        virtual Iterator* createIterator();

    public:
        string getName();
        string getDescriptione();
        bool isVegetarian();
        double getPrice();
        void getInfo();
};

#endif