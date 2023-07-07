#ifndef CLAM_PIZZA_HPP
#define CLAM_PIZZA_HPP

#include "pizza.hpp"

#include <iostream>
using namespace std;

class ClamPizza : public Pizza {
    public:
        void prepare() override {
            cout << "Prepare clam pizza." << endl;
        };

        void bake() override {
            cout << "Bake clam pizza." << endl;
        };

        void cut() override {
            cout << "Cut clam pizza." << endl;
        }

        void box() override {
            cout << "Box clam pizza." << endl;
        }
};

#endif