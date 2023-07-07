#ifndef MENU_HPP
#define MENU_HPP

#include "menu_component.hpp"

#include <string>
#include <vector>
using namespace std;

class Menu : public MenuComponent {
    public:
        vector<MenuComponent*> menu_vector;
        string name;
        string description;

    public:
        Menu(string name, string description);
    
    public:
        void add(MenuComponent* component) override;
        MenuComponent* getChild(int i) override;
        string getName() override;
        string getDescription() override;
        Iterator* createIterator() override;
        void print() override;
};

#endif