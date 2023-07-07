#ifndef STEREO_HPP
#define STEREO_HPP

#include <string>
using namespace std;

class CD {
    public:
        string name;

    public:
        CD(string name);
};

class Stereo {
    public:
        string name;
        CD* cd;
        int volume;

    public:
        Stereo(string name);

    public:
        void on();
        void off();
        void setCD(CD* cd);
        void setVolume(int v);
};

#endif