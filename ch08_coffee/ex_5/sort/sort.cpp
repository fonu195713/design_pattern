#ifndef SORT_CPP
#define SORT_CPP

#include "sort.hpp"

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Sort<T>::sort(vector<T>* vector) {
    int n = vector -> size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((*vector)[j].compareTo((*vector)[j + 1]) == State::greater) {
                Sort<T>::swap(&(*vector)[j], &(*vector)[j+1]);
            }
        }
    }
}

template <typename T>
void Sort<T>::show(vector<T> v) {
    for(T element : v) {
        cout << (element.toString()) << endl;
    }
}

template <typename T>
void Sort<T>::swap(T* t1, T* t2) {
    T temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}

#endif