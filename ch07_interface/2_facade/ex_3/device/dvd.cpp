#ifndef DVD_CPP
#define DVD_CPP

#include "dvd.hpp"

#include <iostream>
using namespace std;

void DVD::on() {
    cout << "Top-O-Line DVD Player on" << endl;
}

void DVD::play(string movie) {
    cout << "Top-O-Line DVD Player Playing " << movie << endl;
}

#endif