#ifndef STEREO_COMMAND_CPP
#define STEREO_COMMAND_CPP

#include "stereoCommand.hpp"

StereoOnCommand::StereoOnCommand(Stereo* stereo) {
    this -> stereo = stereo;
}

StereoOffCommand::StereoOffCommand(Stereo* stereo) {
    this -> stereo = stereo;
}

#endif