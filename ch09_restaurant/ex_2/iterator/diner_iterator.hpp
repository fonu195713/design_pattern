#ifndef DINER_ITERATOR_HPP
#define DINER_ITERATOR_HPP

#include "iterator.hpp"
#include "../menu/diner_menu.hpp"

class DinerIterator : public Iterator {
    private:
        DinerMenu* diner_menu;
        int position;

    private:
        bool hasNext() override;
        void* next() override;

    public:
        DinerIterator(DinerMenu* menu);

    public:
        void show_all_info() override;
};

#endif
