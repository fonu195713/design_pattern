#include "menu/diner_menu.cpp"
#include "menu/pancake_menu.cpp"
#include "menu/cafe_menu.cpp"

#include "waiter/waiter.cpp"

#include <vector>
using namespace std;

int main(void) {
    vector<Menu*> v = {
        new DinerMenu(),
        new PancakeMenu(),
        new CafeMenu()
    };

    Waiter* waiter = new Waiter(v);
    waiter -> printMenu();
}