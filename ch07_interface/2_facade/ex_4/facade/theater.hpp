#ifndef THEATER_HPP
#define THEATER_HPP

#include "../device/amp.cpp"
#include "../device/cd.cpp"
#include "../device/dvd.cpp"
#include "../device/light.cpp"
#include "../device/popper.cpp"
#include "../device/projector.cpp"
#include "../device/screen.cpp"
#include "../device/tuner.cpp"

class Theater {
    public:
        Amp* amp;
        Tuner* tuner;
        DVD* dvd;
        CD* cd;
        Projector* projector;
        Light* light;
        Screen* screen;
        Popper* popper;
    
    public:
        Theater(
            Amp* amp,
            Tuner* tuner,
            DVD* dvd,
            CD* cd,
            Projector* projector,
            Light* light,
            Screen* screen,
            Popper* popper
        );

    public:
        void watchMovie();
        void endMovie();
};

#endif