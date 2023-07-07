#ifndef MENU_ITERATOR_HPP
#define MENU_ITERATOR_HPP

#include "../menu/menu_component.hpp"
#include "iterator.hpp"

#include <vector>
using namespace std;

class MenuIterator : public Iterator {
    public:
        vector<vector<vector<MenuComponent*>::iterator>> vector_stack;
    
    public:
        MenuIterator(vector<MenuComponent*>::iterator begin, vector<MenuComponent*>::iterator end);

    public:
        bool hasNext() override;
        void* next() override;
};

#endif