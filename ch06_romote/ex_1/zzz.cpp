#include "romote.cpp"
#include "door.cpp"
#include "light.cpp"

int main(void) {
    Romote* romote = new Romote();

    Light* light = new Light();
    LightOnCommand* light_on = new LightOnCommand(light);

    GarageDoor* door = new GarageDoor();
    GarageDoorOpenCommand* door_open = new GarageDoorOpenCommand(door);

    romote -> setCommand(light_on);
    romote -> buttonWasPressed();
    romote -> setCommand(door_open);
    romote -> buttonWasPressed();
}