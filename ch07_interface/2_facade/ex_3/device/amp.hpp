#ifndef AMP_HPP
#define AMP_HPP

#include "dvd.cpp"

class Amp {
    public:
        DVD* dvd;

    public:
        void on();
        void setDvd(DVD* dvd);
        void setSurroundSound();
        void setVolume(int i);
};

#endif