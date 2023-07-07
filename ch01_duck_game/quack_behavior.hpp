#ifndef QUACK_BEHAVIOR_HPP
#define QUACK_BEHAVIOR_HPP

class QuackBehavior {
    public:
        virtual void quack() = 0;
};

#endif

// --- new class MuteQuack --- //

#ifndef MUTE_QUACK_HPP
#define MUTE_QUACK_HPP

#include <iostream>
#include "quack_behavior.hpp"
using namespace std;

class MuteQuack : public QuackBehavior {
    public:
        void quack() override {
        cout << "..... (cannot quack)" << endl;
    }
};

#endif

// --- new class SquackQuack --- //

#ifndef SQUACK_QUACK_HPP
#define SQUACK_QUACK_HPP

#include <iostream>
#include "quack_behavior.hpp"
using namespace std;

class SquackQuack : public QuackBehavior {
    public:
        void quack() override {
        cout << "squack squack" << endl;
    }
};

#endif

// --- new class ZzzQuack --- //

#ifndef ZZZ_QUACK_HPP
#define ZZZ_QUACK_HPP

#include <iostream>
#include "quack_behavior.hpp"
using namespace std;

class ZzzQuack : public QuackBehavior {
    public:
        void quack() override {
        cout << "zzz~ zzz~" << endl;
    }
};

#endif