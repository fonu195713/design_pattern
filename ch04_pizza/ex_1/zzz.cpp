#include "store/pizzaStore.cpp"
#include "factory/pizzaFactory.cpp"

// simple factory
int main(void) {
    PizzaStore* store = new PizzaStore(new PizzaFactory());
    Pizza* pizza1 = store -> orderPizza("cheese");
}