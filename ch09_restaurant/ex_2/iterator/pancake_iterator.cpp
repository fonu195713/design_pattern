#ifndef PANCAKE_ITERATOR_CPP
#define PANCAKE_ITERATOR_CPP

#include "pancake_iterator.hpp"

PancakeIterator::PancakeIterator(PancakeMenu* menu) {
    this -> pancake_menu = menu;
    this -> item = (menu -> menu_list).begin();
}

bool PancakeIterator::hasNext() {
    if((this -> item) != (this -> pancake_menu -> menu_list).end())
        return true;
    else
        return false;
}

void* PancakeIterator::next() {
    this -> item = std::next(this -> item, 1);
    return *(this -> item);
}

void PancakeIterator::show_all_info() {
    if((this -> pancake_menu -> menu_list).size() == 0) {
        return;
    }

    this -> item = (this -> pancake_menu -> menu_list).begin();
    while(this -> hasNext()) {
        Menu* m = (Menu*)(*(this -> item));
        m -> getInfo();
        this -> next();
    }
}

#endif
