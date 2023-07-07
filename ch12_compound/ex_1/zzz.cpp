#include "duck/duck_call.cpp"
#include "duck/mallard_duck.cpp"
#include "duck/redhead_duck.cpp"
#include "duck/rubber_duck.cpp"

#include <vector>
using namespace std;

int main(void) {
    vector<Quackable*> ary = {
        new MallardDuck(),
        new RedheadDuck(),
        new DuckCall(),
        new RubberDuck()
    };

    for(Quackable* duck : ary) {
        duck -> quack();
    }
}