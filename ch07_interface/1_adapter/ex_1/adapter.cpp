#ifndef ADAPTER_CPP
#define ADAPTER_CPP

#include "adapter.hpp"

Turkey_Adapter::Turkey_Adapter(Turkey* turkey) {
    this -> turkey = turkey;
}

Duck_Adapter::Duck_Adapter(Duck* duck) {
    this -> duck = duck;
}

#endif