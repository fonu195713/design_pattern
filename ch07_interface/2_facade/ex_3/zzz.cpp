#include "device/amp.cpp"
#include "device/dvd.cpp"
#include "device/light.cpp"
#include "device/popper.cpp"
#include "device/projector.cpp"
#include "device/screen.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Amp* amp = new Amp();
    DVD* dvd = new DVD();
    Light* light = new Light();
    Popper* popper = new Popper();
    Projector* projector = new Projector();
    Screen* screen = new Screen();

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
    dvd -> play("Raider of the Lost Ark");
}