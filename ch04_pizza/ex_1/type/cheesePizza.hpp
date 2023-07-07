#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

class CheesePizza : public Pizza {
    public:
        void prepare() override {
            cout << "Prepare cheese pizza." << endl;
        };

        void bake() override {
            cout << "Bake cheese pizza." << endl;
        };
        void cut() override {
            cout << "Cut cheese pizza." << endl;
        }

        void box() override {
            cout << "Box cheese pizza." << endl;
        }
};

#endif