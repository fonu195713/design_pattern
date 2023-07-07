#ifndef DVD_CPP
#define DVD_CPP

#include "dvd.hpp"

#include <iostream>
using namespace std;

DVD::DVD(string name) {
    this -> name = name;
}

void DVD::on() {
    cout << "Top-O-Line DVD Player on" << endl;
}

void DVD::play() {
    cout << "Top-O-Line DVD Player Playing " << (this -> name) << endl;
}

void DVD::stop() {
    cout << "Top-O-Line DVD Player stopped " << (this -> name) << endl;
}

void DVD::eject() {
    cout << "Top-O-Line DVD Player eject" << endl;
}

void DVD::off() {
    cout << "Top-O-Line DVD Player off" << endl;
}

#endif