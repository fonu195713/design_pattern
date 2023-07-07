#include "gumball_machine/gumball_machine.cpp"
#include "monitor/gumball_monitor.cpp"

#include <chrono>
#include <thread>
using namespace std;

int main(void) {
    GumballMachine* gumball_machine = new GumballMachine("Seattle", 112);
    GumballMonitor* gumball_monitor = new GumballMonitor(gumball_machine);
    gumball_monitor -> report();

}