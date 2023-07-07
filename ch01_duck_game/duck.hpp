#ifndef DUCK_HPP
#define DUCK_HPP

#include <iostream>
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class Duck {
    public:
        enum Color {
            WOOD_TONE,
            RED,
            GREEN,
            YELLOW
        };
    
    public:
        FlyBehavior* flyBehavior;
        QuackBehavior* quackBehavior;
        Color head_color;

    public:
        virtual void display();
    
    public:
        Duck() {
            head_color = Color::WOOD_TONE;
        }

    public:
        void setFlyBehavior(FlyBehavior* fb);
        void setQuackBehavior(QuackBehavior* qb);
        void preformFly();
        void preformQuack();
        void swim();
};

void Duck::display() {
    switch(head_color) {
        case WOOD_TONE:
            cout << "head color = wood tone" << endl;
            break;
        case RED:
            cout << "head color = red" << endl;
            break;
        case GREEN:
            cout << "head color = green" << endl;
            break;
        case YELLOW:
            cout << "head color = YELLOW" << endl;
            break;
        default:
            cout << "null head color ?" << endl;
            break;
    }
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb) {
    quackBehavior = qb;
}

void Duck::preformFly() {
    flyBehavior -> fly();
}

void Duck::preformQuack() {
    quackBehavior -> quack();
}

void Duck::swim() {
    cout << "All the ducks float, even decoys!" << endl;
}

#endif

// --- new class DecoyDuck --- //

#ifndef DECOY_DUCK_HPP
#define DECOY_DUCK_HPP

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class DecoyDuck : public Duck {
    public:
        DecoyDuck() {
            head_color = Color::WOOD_TONE;
            flyBehavior = new FlyNoWay();
            quackBehavior = new MuteQuack();
        }
};

#endif

// --- new class MallardDuck --- //

#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include <iostream>
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class MallardDuck : public Duck {
    public:
        MallardDuck() {
            head_color = Color::GREEN;
            flyBehavior = new FlyWithWings();
            quackBehavior = new SquackQuack();
        }

        void display() override {
            cout << "Green head duck" << endl;
        }
};

#endif

// --- new class RedHeadDuck --- //

#ifndef RED_HEAD_DUCK_HPP
#define RED_HEAD_DUCK_HPP

#include <iostream>
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class RedHeadDuck : public Duck {
    public:
        RedHeadDuck() {
            head_color = Color::RED;
            flyBehavior = new FlyWithWings();
            quackBehavior = new SquackQuack();
        }

        void display() override {
            cout << "Red head duck" << endl;
        }
};

#endif

// --- new class RubberDuck --- //

#ifndef RUBBER_DUCK_HPP
#define RUBBER_DUCK_HPP

#include <iostream>
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class RubberDuck : public Duck {
    public:
        RubberDuck() {
            head_color = Color::YELLOW;
            flyBehavior = new FlyNoWay();
            quackBehavior = new ZzzQuack();
        }

        void display() override {
            cout << "A rubber duck" << endl;
        }
};

#endif

// --- new class ModelDuck --- //

#ifndef MODEL_DUCK_HPP
#define MODEL_DUCK_HPP

#include <iostream>
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
using namespace std;

class ModelDuck : public Duck {
    public:
        ModelDuck() {
            flyBehavior = new FlyNoWay();
            quackBehavior = new SquackQuack();
        }

        void display() override {
            cout << "A Model duck" << endl;
        }
};

#endif