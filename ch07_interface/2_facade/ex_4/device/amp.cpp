#ifndef AMP_CPP
#define AMP_CPP

#include "amp.hpp"

#include <iostream>
using namespace std;

void Amp::on() {
    cout << "Top-O-Line Amplifier on" << endl;
}

void Amp::setDvd(DVD* dvd) {
    this -> dvd = dvd;
    cout << "Top-O-Line Amplifier setting DVD player to Top-O-Line DVD Player" << endl;
}

void Amp::setSurroundSound() {
    cout << "Top-O-Line Amplifier surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amp::setVolume(int i) {
    cout << "Top-O-Line Amplifier setting volume to " << i << endl;
}

void Amp::off() {
    cout << "Top-O-Line Amplifier off" << endl;
}

#endif