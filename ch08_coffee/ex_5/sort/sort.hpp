#ifndef SORT_HPP
#define SORT_HPP

#include <vector>
#include <string>
using namespace std;

template <typename T>
class Sort {
    public:
        enum class State {greater, same, less_than};

    public:
        static void sort(vector<T>* vector);
        static void swap(T* t1, T* t2);
        static void show(vector<T> vector);
    
    public:
        virtual State compareTo(T t1) = 0;
        virtual string toString() = 0;
};

#endif