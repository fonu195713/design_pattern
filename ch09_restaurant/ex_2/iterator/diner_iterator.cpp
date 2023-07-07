#ifndef DINER_ITERATOR_CPP
#define DINER_ITERATOR_CPP

#include "diner_iterator.hpp"

DinerIterator::DinerIterator(DinerMenu* menu) {
    this -> diner_menu = menu;
    this -> position = 0;
}

bool DinerIterator::hasNext() {
    if(this -> position != this -> diner_menu -> num_of_item)
        return true;
    else 
        return false;
}

void* DinerIterator::next() {
    Menu* m = (this -> diner_menu -> menu_array)[position];
    position += 1;

    return m;
}

void DinerIterator::show_all_info() {
    this -> position = 0;
    while(this -> hasNext()) {
        Menu* m = (Menu*)(this -> next());
        m -> getInfo();
    }
}

#endif
