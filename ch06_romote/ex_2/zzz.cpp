#include "romote.cpp"
#include "door.cpp"
#include "fan.cpp"
#include "light.cpp"
#include "stereo.cpp"

int main(void) {
    Romote* romote = new Romote();

    Light* living_room_light = new Light("living room");
    LightOnCommand* living_room_light_on = new LightOnCommand(living_room_light);
    LightOffCommand* living_room_light_off = new LightOffCommand(living_room_light);

    Light* kitchen_light = new Light("kitchen");
    LightOnCommand* kitchen_light_on = new LightOnCommand(kitchen_light);
    LightOffCommand* kitchen_light_off = new LightOffCommand(kitchen_light);

    Fan* ceiling_fan = new Fan("ceiling");
    FanOnCommand* ceiling_fan_on = new FanOnCommand(ceiling_fan);
    FanOffCommand* ceiling_fan_off = new FanOffCommand(ceiling_fan);

    Door* garage_door = new Door("garage");
    DoorOpenCommand* garage_door_open = new DoorOpenCommand(garage_door);
    DoorCloseCommand* garage_door_close = new DoorCloseCommand(garage_door);

    Stereo* living_room_stereo = new Stereo("living room");
    StereoOnCommand* living_room_stereo_on = new StereoOnCommand(living_room_stereo);
    StereoOffCommand* living_room_stereo_off = new StereoOffCommand(living_room_stereo);

    romote -> setCommand(0, living_room_light_on, living_room_light_off);
    romote -> setCommand(1, kitchen_light_on, kitchen_light_off);
    romote -> setCommand(2, ceiling_fan_on, ceiling_fan_off);
    romote -> setCommand(3, garage_door_open, garage_door_close);
    romote -> setCommand(4, living_room_stereo_on, living_room_stereo_off);

    romote -> showSetting();

    for(int i = 0; i < ROMOTE_NUTTONS; i++) {
        romote -> onButtonWasPressed(i);
        romote -> offButtonWasPressed(i);
        cout << endl;
    }
}