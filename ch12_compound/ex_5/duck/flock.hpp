#ifndef FLOCK_HPP
#define FLOCK_HPP

#include "../behavior/qucakable.hpp"

#include <vector>
using namespace std;

class Flock : public Quackable {
    public:
        vector<Quackable*> duck_vector;
    
    public:
        Flock();
        
    public:
        void add(Quackable* duck);
    
    public:
        void quack();
};

#endif