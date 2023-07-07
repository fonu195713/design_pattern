#ifndef DUCK_HPP
#define DUCK_HPP

#include "../sort/sort.cpp"

#include <string>
using namespace std;

class Duck : public Sort<Duck> {
    public:
        string name;
        float weight;
    
    public:
        Duck(string name, float weight);
    
    public:
        State compareTo(Duck duck) override;
        string toString() override;
};

#endif