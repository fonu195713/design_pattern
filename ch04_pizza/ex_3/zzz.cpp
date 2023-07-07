#include "store/NY_pizzaStore.hpp"
#include "store/IL_pizzaStore.hpp"

// abstract factory
int main(void) {
    PizzaStore* store1 = new NY_PizzaStore();
    store1 -> orderPizza("cheese");

    cout << endl;

    PizzaStore* store2 = new IL_PizzaStore();
    store2 -> orderPizza("cheese");
}