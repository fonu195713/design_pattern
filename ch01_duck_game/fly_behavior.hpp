#ifndef FLY_BEHAVIOR_HPP
#define FLY_BEHAVIOR_HPP

class FlyBehavior {
    public:
        virtual void fly() = 0;
};

#endif

// --- new class FlyNoWay --- //

#ifndef FLY_NO_WAY_HPP
#define FLY_NO_WAY_HPP

#include <iostream>
using namespace std;

class FlyNoWay : public FlyBehavior {
    void fly() override {
        cout << "I can't fly." << endl;
    }
};

#endif

// --- new class FlyWithWings --- //

#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include <iostream>
using namespace std;

class FlyWithWings : public FlyBehavior {
    void fly() override {
        cout << "I'm flying!!!" << endl;
    }
};

#endif

// --- new class FlyRocketPowered --- //

#ifndef FLY_ROCKET_POWERED_HPP
#define FLY_ROCKET_POWERED_HPP

#include <iostream>
using namespace std;

class FlyRocketPowered : public FlyBehavior {
    void fly() override {
        cout << "I'm flying with a rocket!!!" << endl;
    }
};

#endif