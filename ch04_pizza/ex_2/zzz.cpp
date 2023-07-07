#include "store/CA_pizzaStore.hpp"
#include "store/IL_pizzaStore.hpp"
#include "store/NY_pizzaStore.hpp"

#include <iostream>
using namespace std;

// factory method
int main(void) {
    cout << "For Ethan:" << endl;
    PizzaStore* store1 = new NY_PizzaStore();
    store1 -> orderPizza("cheese");

    cout << endl;

    cout << "For Joel:" << endl;
    PizzaStore* store2 = new CA_PizzaStore();
    store2 -> orderPizza("cheese");
}