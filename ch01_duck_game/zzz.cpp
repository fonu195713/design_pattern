#include <iostream>
#include "duck.hpp"

using namespace std;

int main(void) {
    Duck* list[] = {
        new DecoyDuck(),
        new MallardDuck(),
        new RedHeadDuck(),
        new RubberDuck(),
        new ModelDuck()
    };

    for(int i = 0; i < 5; i++) {
        list[i] -> display();
        list[i] -> preformQuack();
        list[i] -> preformFly();
        cout << endl;
    }

    list[4] -> preformFly();
    list[4] -> setFlyBehavior(new FlyRocketPowered);
    list[4] -> preformFly();
}