#ifndef MENU_COMPONEMT_HPP
#define MENU_COMPONEMT_HPP

#include "../iterator/iterator.hpp"

#include <string>
using namespace std;

class MenuComponent {
    public:
        virtual void add(MenuComponent* component);
        virtual void remove(MenuComponent* component);
        virtual MenuComponent* getChild(int i);
        virtual string getName();
        virtual string getDescription();
        virtual bool isVegetarian();
        virtual double getPrice();
        virtual Iterator* createIterator();
        virtual void print();
};

#endif