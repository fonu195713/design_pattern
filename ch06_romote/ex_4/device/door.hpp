#ifndef DOOR_HPP
#define DOOR_HPP

#include <string>
using namespace std;

class Door {
    public:
        string name;
    
    public:
        Door(string name);
        
    public:
        void open();
        void close();
};

#endif