#ifndef TURKEY_HPP
#define TURKEY_HPP

#include <iostream>
using namespace std;

class Turkey {
    public:
        virtual void gobble() = 0;
        virtual void fly() = 0;
};

class Wild_Turkey : public Turkey {
    public:
        void gobble() override {
            cout << "gobble gobble" << endl;
        }

        void fly() override {
            cout << "I'm turkey, I'm flying a short distance" << endl;
        }
};

#endif