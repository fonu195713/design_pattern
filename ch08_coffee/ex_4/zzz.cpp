#include "beverage/coffee.cpp"
#include "beverage/tea.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Coffee* coffee1 = new Coffee();
    coffee1 -> prepareRecipe();
    cout << endl;

    Coffee* coffee2 = new Coffee();
    coffee2 -> setCondiments(false);
    coffee2 -> prepareRecipe();
    cout << endl;

    Tea* tea = new Tea();
    tea -> prepareRecipe();
}