#include "menu/diner_menu.hpp"
#include "menu/pancake_menu.hpp"
#include "waiter/waiter.cpp"

int main(void) {
    Waiter* waiter = new Waiter(new DinerMenu(), new PancakeMenu());
    waiter -> printMenu();
}