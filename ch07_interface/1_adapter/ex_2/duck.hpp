#ifndef DUCK_HPP
#define DUCK_HPP

#include "fly.cpp"

class Duck : virtual public Fly {
    public:
        virtual void quack() = 0;
};

class Marrald_Duck : public Duck {
    public:
        void quack() override;
};

#endif