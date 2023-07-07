#ifndef REDHEAD_DUCK_HPP
#define REDHEAD_DUCK_HPP

#include "../behavior/qucakable.hpp"

class RedheadDuck : public Quackable {
    public:
        void quack() override;
};

#endif