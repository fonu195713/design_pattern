#ifndef VEGGIE_PIZZA_HPP
#define VEGGIE_PIZZA_HPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

class VeggiePizza : public Pizza {
    public:
        void prepare() override {
            cout << "Prepare veggie pizza." << endl;
        };

        void bake() override {
            cout << "Bake veggie pizza." << endl;
        };

        void cut() override {
            cout << "Cut veggie pizza." << endl;
        }

        void box() override {
            cout << "Box veggie pizza." << endl;
        }
};

#endif