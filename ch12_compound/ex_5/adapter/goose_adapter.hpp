#ifndef GOOSE_ADAPTER_HPP
#define GOOSE_ADAPTER_HPP

#include "../behavior/qucakable.hpp"
#include "../goose/goose.hpp"

class GooseAdapter : public Quackable {
    public:
        Goose* goose;
    
    public:
        GooseAdapter(Goose* g);

    public:
        void quack();
};

#endif