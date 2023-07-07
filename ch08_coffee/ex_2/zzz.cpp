#include "beverage/coffee.cpp"
#include "beverage/tea.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Coffee* coffee = new Coffee();
    Tea* tea = new Tea();

    coffee -> prepareRecipe();
    cout << endl;
    tea -> prepareRecipe();
}