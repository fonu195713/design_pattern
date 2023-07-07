#include "facade/theater.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Amp* amp = new Amp();
    Tuner* tuner = new Tuner();
    DVD* dvd = new DVD("Raiders of the Lost Ark");
    CD* cd = new CD();
    Projector* projector = new Projector();
    Light* light = new Light();
    Screen* screen = new Screen();
    Popper* popper = new Popper();

    Theater* theater = new Theater(amp, tuner, dvd, cd, projector, light, screen, popper);
    theater -> watchMovie();
    cout << endl;
    theater -> endMovie();
}