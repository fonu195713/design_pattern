#include "counter/quack_counter.cpp"
#include "duck/duck_call.cpp"
#include "duck/mallard_duck.cpp"
#include "duck/redhead_duck.cpp"
#include "duck/rubber_duck.cpp"
#include "adapter/goose_adapter.cpp"

#include <iostream>
#include <vector>
using namespace std;

int QuackCounter::counter = 0;

int main(void) {
    vector<Quackable*> ary = {
        new QuackCounter(new MallardDuck()),
        new QuackCounter(new RedheadDuck()),
        new QuackCounter(new DuckCall()),
        new QuackCounter(new RubberDuck()),
        new GooseAdapter(new Goose())
    };

    for(Quackable* duck : ary) {
        duck -> quack();
    }

    cout << "The ducks quacked " << QuackCounter::counter << " times." << endl;
}