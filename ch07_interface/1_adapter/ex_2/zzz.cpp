#include "adapter.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Turkey* turkey = new Wild_Turkey();
    Duck* duck = new Marrald_Duck();

    Duck* adapter1 = new Turkey_Adapter(turkey);
    adapter1 -> quack();
    adapter1 -> fly();

    cout << endl;

    Turkey* adapter2 = new Duck_Adapter(duck);
    adapter2 -> gobble();
    adapter2 -> fly();
}