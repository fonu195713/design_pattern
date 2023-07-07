#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "../behavior/qucakable.hpp"

class MallardDuck : public Quackable {
    public:
        void quack() override;
};

#endif