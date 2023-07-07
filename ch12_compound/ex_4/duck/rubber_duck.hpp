#ifndef RUBBER_DUCK_HPP
#define RUBBER_DUCK_HPP

#include "../behavior/qucakable.hpp"

class RubberDuck : public Quackable {
    public:
        void quack() override;
};

#endif