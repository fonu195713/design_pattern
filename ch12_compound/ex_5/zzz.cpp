#include "factory/counting_duck_factory.cpp"
#include "adapter/goose_adapter.cpp"
#include "duck/flock.cpp"

#include <iostream>
using namespace std;

int QuackCounter::counter = 0;

int main(void) {
    VirtualDuckFactory* factory = new CountingDuckFactory();

    Flock* flock_of_ducks = new Flock();
    flock_of_ducks -> add(factory -> createMallardDuck());
    flock_of_ducks -> add(factory -> createRedheadDuck());
    flock_of_ducks -> add(factory -> createDuckCall());
    flock_of_ducks -> add(factory -> createRubberDuck());
    flock_of_ducks -> add(new GooseAdapter(new Goose()));
    flock_of_ducks -> quack();
    cout << endl;

    Flock* flock_of_mallard_ducks = new Flock();
    flock_of_mallard_ducks -> add(factory -> createMallardDuck());
    flock_of_mallard_ducks -> add(factory -> createMallardDuck());
    flock_of_mallard_ducks -> add(factory -> createMallardDuck());
    flock_of_mallard_ducks -> add(factory -> createMallardDuck());
    flock_of_mallard_ducks -> add(factory -> createMallardDuck());
    flock_of_mallard_ducks -> quack();
    cout << endl;

    cout << "The ducks quacked " << QuackCounter::counter << " times." << endl;
}