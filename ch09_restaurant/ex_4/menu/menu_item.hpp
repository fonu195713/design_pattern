#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include "menu_component.hpp"

#include <string>
using namespace std;

class MenuItem : public MenuComponent {
    private:
        string name;
        string description;
        bool vegetarian;
        double price;
    
    public:
        MenuItem(string name, string description, bool vegetarian, double price);
    
    public:
        string getName() override;
        string getDescription() override;
        bool isVegetarian() override;
        double getPrice() override;
        void print() override;
};

#endif