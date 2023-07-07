#ifndef STEREO_CPP
#define STEREO_CPP

#include "stereo.hpp"

#include <iostream>
#include <string>
using namespace std;

CD::CD(string name) {
    this -> name = name;
}

Stereo::Stereo(string name) {
    this -> name = name + " stereo";
    this -> volume = 0;
}

void Stereo::on() {
    cout << (this -> name) << " is on" << endl;
}

void Stereo::off() {
    cout << (this -> name) << " is off" << endl;
}

void Stereo::setCD(CD* cd) {
    this -> cd = cd;
    cout << "set CD as " << (this -> cd -> name) << endl;
}

void Stereo::setVolume(int v) {
    this -> volume = v;
    cout << "set " << (this -> name) << " volume to " << v << endl;
}

StereoOnCommand::StereoOnCommand(Stereo* stereo) {
    this -> stereo = stereo;
}

StereoOffCommand::StereoOffCommand(Stereo* stereo) {
    this -> stereo = stereo;
}

#endif