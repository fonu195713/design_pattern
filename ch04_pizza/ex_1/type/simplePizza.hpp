#ifndef SIMPLE_PIZZA_HPP
#define SIMPLE_PIZZA_HPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

class SimplePizza : public Pizza {
    public:
        void prepare() override {
            cout << "Prepare simple pizza." << endl;
        };

        void bake() override {
            cout << "Bake simple pizza." << endl;
        };

        void cut() override {
            cout << "Cut simple pizza." << endl;
        }

        void box() override {
            cout << "Box simple pizza." << endl;
        }
};

#endif