#include "command/doorCommand.cpp"
#include "command/hottubCommand.cpp"
#include "command/lightCommand.cpp"
#include "command/stereoCommand.cpp"
#include "command/televisionCommand.cpp"
#include "command/discoCommand.cpp"
#include "romote.cpp"

int main(void) {
    Romote* romote = new Romote();

    Light* living_room_light = new Light("living room");
    Light* kitchen_light = new Light("kitchen");
    Door* garage_door = new Door("garage");
    Stereo* living_room_stereo = new Stereo("living room");
    Hottub* bathroom_hottub = new Hottub("bathroom");
    Television* living_room_tv = new Television("living room");

    vector<Command*> party_on = {
        new LightOnCommand(living_room_light),
        new LightOnCommand(kitchen_light),
        new DoorOpenCommand(garage_door),
        new StereoOnCommand(living_room_stereo),
        new HottubOnCommand(bathroom_hottub),
        new TelevisionOnCommand(living_room_tv)
    };

    vector<Command*> party_off = {
        new LightOffCommand(living_room_light),
        new LightOffCommand(kitchen_light),
        new DoorCloseCommand(garage_door),
        new StereoOffCommand(living_room_stereo),
        new HottubOffCommand(bathroom_hottub),
        new TelevisionOffCommand(living_room_tv)
    };

    DiscoOnCommand* disco_on = new DiscoOnCommand(party_on, "disco");
    DiscoOffCommand* disco_off = new DiscoOffCommand(party_off, "disco");

    romote -> setCommand(0, disco_on, disco_off);
    romote -> onButtonWasPressed(0);

    cout << endl;
    romote -> undoButtonWasPressed();
}