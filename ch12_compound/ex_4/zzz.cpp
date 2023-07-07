#include "factory/counting_duck_factory.cpp"
#include "adapter/goose_adapter.cpp"

#include <iostream>
#include <vector>
using namespace std;

int QuackCounter::counter = 0;

int main(void) {
    VirtualDuckFactory* factory = new CountingDuckFactory();

    vector<Quackable*> ary = {
        factory -> createMallardDuck(),
        factory -> createRedheadDuck(),
        factory -> createDuckCall(),
        factory -> createRubberDuck(),
        new GooseAdapter(new Goose())
    };

    for(Quackable* duck : ary) {
        duck -> quack();
    }

    cout << "The ducks quacked " << QuackCounter::counter << " times." << endl;
}