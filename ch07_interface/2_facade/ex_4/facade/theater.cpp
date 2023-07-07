#ifndef THEATER_CPP
#define THEATER_CPP

#include "theater.hpp"

Theater::Theater(
        Amp* amp,
        Tuner* tuner,
        DVD* dvd, CD* cd,
        Projector* projector,
        Light* light,
        Screen* screen,
        Popper* popper) {
    this -> amp = amp;
    this -> tuner = tuner;
    this -> dvd = dvd;
    this -> cd = cd;
    this -> projector = projector;
    this -> light = light;
    this -> screen = screen;
    this -> popper = popper;
}

void Theater::watchMovie() {
    cout << "Get ready to watch a movie ..." << endl;
    popper -> on();
    popper -> pop();
    light -> dim(10);
    screen -> down();
    projector -> on();
    projector -> wideScreenMode();
    amp -> on();
    amp -> setDvd(dvd);
    amp -> setSurroundSound();
    amp -> setVolume(5);
    dvd -> on();
    dvd -> play();
}

void Theater::endMovie() {
    cout << "Shutting movie theater down ..." << endl;
    popper -> off();
    light -> off();
    screen -> up();
    projector -> off();
    amp -> off();
    dvd -> stop();
    dvd -> eject();
    dvd -> off();
}

#endif