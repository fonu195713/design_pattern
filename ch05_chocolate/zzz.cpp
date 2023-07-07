#include <iostream>
#include <mutex>
using namespace std;

class ChocolateBoiler {
    private:
        static ChocolateBoiler* obj;
        static mutex mtx;

    private:
        ChocolateBoiler() {}

    public:
        static ChocolateBoiler* getObj() {
            lock_guard<mutex> lock(mtx);
            if (obj == nullptr) {
                obj = new ChocolateBoiler();
            }
            return obj;
        }
};

ChocolateBoiler* ChocolateBoiler::obj = nullptr;
mutex ChocolateBoiler::mtx;

int main(void) {
    ChocolateBoiler* obj1 = ChocolateBoiler::getObj();
    cout << obj1 << endl;

    ChocolateBoiler* obj2 = ChocolateBoiler::getObj();
    cout << obj2 << endl;
}