#ifndef ADAPTER_CPP
#define ADAPTER_CPP

#include "adapter.hpp"

Turkey_Adapter::Turkey_Adapter(Turkey* turkey) {
    this -> turkey = turkey;
}

void Turkey_Adapter::quack() {
    turkey -> gobble();
}

Duck_Adapter::Duck_Adapter(Duck* duck) {
    this -> duck = duck;
}

void Duck_Adapter::gobble() {
    duck -> quack();
}

#endif