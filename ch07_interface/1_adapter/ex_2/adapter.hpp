#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "duck.cpp"
#include "turkey.cpp"

class Turkey_Adapter : public Duck {
    public:
        Turkey* turkey;

    public:
        Turkey_Adapter(Turkey* turkey);
    
    public:
        void quack() override;
};

class Duck_Adapter : public Turkey {
    public:
        Duck* duck;

    public:
        Duck_Adapter(Duck* duck);
    
    public:
        void gobble() override;
};

#endif