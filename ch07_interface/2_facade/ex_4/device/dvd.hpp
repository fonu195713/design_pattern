#ifndef DVD_HPP
#define DVD_HPP

#include <string>
using namespace std;

class DVD {
    public:
        string name;
    
    public:
        DVD(string name);

    public:
        void on();
        void play();
        void stop();
        void eject();
        void off();
};

#endif