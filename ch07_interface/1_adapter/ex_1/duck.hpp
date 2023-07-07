#ifndef DUCK_HPP
#define DUCK_HPP

#include <iostream>
using namespace std;

class Duck {
    public:
        virtual void quack() = 0;
        virtual void fly() = 0;
};

class Marrald_Duck : public Duck {
    public:
        void quack() override {
            cout << "quack" << endl;
        }

        void fly() override {
            cout << "I'm duck, I'm flying" << endl;
        }
};

#endif