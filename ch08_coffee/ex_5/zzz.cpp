#include "animal/duck.cpp"
#include "animal/turkey.cpp"

#include <iostream>
using namespace std;

int main(void) {
    vector<Duck> d = {
        Duck("Noah", 3.6),
        Duck("Emma", 8.2),
        Duck("Owen", 6.9),
        Duck("Liam", 1.4),
        Duck("Ryan", 7.3)
    };
    Duck::sort(&d);
    Duck::show(d);

    cout << endl;

    vector<Turkey> t = {
        Turkey("Noah", 3.6),
        Turkey("Emma", 8.2),
        Turkey("Owen", 6.9),
        Turkey("Liam", 1.4),
        Turkey("Ryan", 7.3)
    };
    Turkey::sort(&t);
    Turkey::show(t);
}