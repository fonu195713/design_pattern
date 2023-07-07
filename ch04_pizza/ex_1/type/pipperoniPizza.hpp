#ifndef PIPPERONI_PIZZA_HPP
#define PIPPERONI_PIZZA_HPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

class PipperoniPizza : public Pizza {
    public:
        void prepare() override {
            cout << "Prepare pipperoni pizza." << endl;
        };

        void bake() override {
            cout << "Bake pipperoni pizza." << endl;
        };

        void cut() override {
            cout << "Cut pipperoni pizza." << endl;
        }

        void box() override {
            cout << "Box pipperoni pizza." << endl;
        }
};

#endif