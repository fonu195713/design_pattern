#ifndef PROJECTOR_HPP
#define PROJECTOR_HPP

#include "dvd.cpp"

class Projector {
    public:
        DVD* dvd;

    public:
        void on();
        void setInput(DVD* dvd);
        void wideScreenMode();
        void off();
};

#endif