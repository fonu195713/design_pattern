#ifndef CAFE_ITERATOR_CPP
#define CAFE_ITERATOR_CPP

#include "cafe_iterator.hpp"

CafeIterator::CafeIterator(CafeMenu* menu) {
    this -> cafe_menu = menu;
    this -> node = this -> cafe_menu -> head_node;
}

bool CafeIterator::hasNext() {
    if((this -> node) != nullptr)
        return true;
    else
        return false;
}

void* CafeIterator::next() {
    this -> node = this -> node -> next;
    return (this -> node);
}

void CafeIterator::show_all_info() {
    if(this -> node == nullptr) {
        return;
    }

    this -> node = this -> cafe_menu -> head_node;
    while(this -> hasNext()) {
        Menu* m = this -> node -> menu;
        m -> getInfo();
        this -> next();
    }
}

#endif
