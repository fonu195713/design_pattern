#include "waiter/waiter.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Waiter* waiter = new Waiter();
    waiter -> printMenu();
}