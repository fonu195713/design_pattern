#ifndef TELEVISION_HPP
#define TELEVISION_HPP

#include <string>
using namespace std;

class Television {
    public:
        string name;
    
    public:
        Television(string name);
        
    public:
        void on();
        void off();
};

#endif