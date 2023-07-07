#ifndef CONDIMENT_HPP
#define CONDIMENT_HPP

#include "../coffee/coffee.cpp"

class Condiment : public Coffee {
    public:
        virtual string getDescription() = 0;
};

#endif