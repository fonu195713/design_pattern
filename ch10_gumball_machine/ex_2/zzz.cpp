#include "machine/gumball_machine.cpp"

#include <chrono>
#include <thread>
using namespace std;

int main(void) {
    GumballMachine* gumball_machine = new GumballMachine(100);

    int count = 10;
    for(int i = 1; i <= count; i++) {
        gumball_machine -> insertQuarter();
        gumball_machine -> turnCrank();
        cout << endl;

        if(i != count) {
            this_thread::sleep_for(chrono::seconds(1));
        }
    }   
}