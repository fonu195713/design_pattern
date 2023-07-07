#ifndef TURKEY_HPP
#define TURKEY_HPP

#include "fly.cpp"

class Turkey : virtual public Fly {
    public:
        virtual void gobble() = 0;
};

class Wild_Turkey : public Turkey {
    public:
        void gobble() override;
};

#endif