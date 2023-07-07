#ifndef PANCAKE_ITERATOR_HPP
#define PANCAKE_ITERATOR_HPP

#include "iterator.hpp"
#include "../menu/pancake_menu.hpp"

#include <list>
using namespace std;

class PancakeIterator : public Iterator {
    private:
        PancakeMenu* pancake_menu;
        list<Menu*>::iterator item;
    
    private:
        bool hasNext() override;
        void* next() override;

    public:
        PancakeIterator(PancakeMenu* menu);

    public:
        void show_all_info() override;
};

#endif
