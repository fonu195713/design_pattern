#ifndef CAFE_ITERATOR_HPP
#define CAFE_ITERATOR_HPP

#include "iterator.hpp"
#include "../menu/cafe_menu.hpp"

#include <vector>
using namespace std;

class CafeIterator : public Iterator {
    private:
        CafeMenu* cafe_menu;
        Node* node;
    
    private:
        bool hasNext() override;
        void* next() override;

    public:
        CafeIterator(CafeMenu* menu);

    public:
        void show_all_info() override;
};

#endif
