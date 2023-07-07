#include "coffee/espresso.cpp"
#include "coffee/houseBlend.cpp"
#include "coffee/darkRoast.cpp"
#include "coffee/deca.cpp"

#include "condiment/mocha.cpp"
#include "condiment/soy.cpp"
#include "condiment/whip.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Coffee* drink1 = new Espresso();
    cout << drink1 -> getDescription() << " $" << drink1 -> cost() << endl;

    Coffee* drink2 = new DarkRoast();
    drink2 = new Mocha(drink2);
    drink2 = new Mocha(drink2);
    drink2 = new Whip(drink2);
    cout << drink2 -> getDescription() << " $" << drink2 -> cost() << endl;

    Coffee* drink3 = new Deca();
    drink3 = new Soy(drink3);
    drink3 = new Mocha(drink3);
    drink3 = new Whip(drink3);
    cout << drink3 -> getDescription() << " $" << drink3 -> cost() << endl;
}