#ifndef GOOSE_ADAPTER_CPP
#define GOOSE_ADAPTER_CPP

#include "goose_adapter.hpp"
#include "../goose/goose.cpp"

GooseAdapter::GooseAdapter(Goose* g) {
    this -> goose = g;
}

void GooseAdapter::quack() {
    this -> goose -> honk();
}

#endif