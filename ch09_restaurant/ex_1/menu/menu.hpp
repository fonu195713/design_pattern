#ifndef MENU_HPP
#define MENU_HPP

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
        string getName();
        string getDescriptione();
        bool isVegetarian();
        double getPrice();
};

#endif