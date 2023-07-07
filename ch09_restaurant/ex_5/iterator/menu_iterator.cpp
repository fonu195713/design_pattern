#ifndef MENU_ITERATOR_CPP
#define MENU_ITERATOR_CPP

#include "menu_iterator.hpp"
#include "../menu/menu_component.cpp"
#include "../menu/menu.cpp"

#include <vector>
using namespace std;


MenuIterator::MenuIterator(vector<MenuComponent*>::iterator begin, vector<MenuComponent*>::iterator end) {
    (this -> vector_stack).push_back({begin, end});
}

bool MenuIterator::hasNext() {
    if((this -> vector_stack).empty())
        return false;
    else {
        vector<vector<MenuComponent*>::iterator> last_one = (this -> vector_stack).back();
        if(last_one[0] == last_one[1]) {
            (this -> vector_stack).pop_back();
            return (this -> hasNext());
        }
        else {
            return true;
        }
    }
}

void* MenuIterator::next() {
    if(this -> hasNext()) {
        MenuComponent* component = *(((this -> vector_stack).back())[0]);
        ++((this -> vector_stack).back())[0];
        if(dynamic_cast<Menu*>(component)) {
            Menu* menu = (Menu*)component;
            (this -> vector_stack).push_back({menu -> menu_vector.begin(), menu -> menu_vector.end()});
        }
        return component;
    }
    else {
        return nullptr;
    }
}

#endif