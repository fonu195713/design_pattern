#ifndef PROJECTOR_CPP
#define PROJECTOR_CPP

#include "projector.hpp"

#include <iostream>
using namespace std;

void Projector::on() {
    cout << "Top-O-Line Projector on" << endl;
}

void Projector::setInput(DVD dvd) {
    this -> dvd = dvd;
}

void Projector::wideScreenMode() {
    cout << "Top-O-Line Projector in widescreen mode (16x9 aspect ratio)" << endl;
}

#endif