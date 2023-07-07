#ifndef TURKEY_HPP
#define TURKEY_HPP

#include "../sort/sort.cpp"

#include <string>
using namespace std;

class Turkey : public Sort<Turkey> {
    public:
        string name;
        float weight;
    
    public:
        Turkey(string name, float weight);
    
    public:
        State compareTo(Turkey turkey) override;
        string toString() override;
};

#endif