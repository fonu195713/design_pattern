#ifndef DUCK_CALL_HPP
#define DUCK_CALL_HPP

#include "../behavior/qucakable.hpp"

class DuckCall : public Quackable {
    public:
        void quack() override;
};

#endif