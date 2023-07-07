#ifndef NULL_ITERATOR_HPP
#define NULL_ITERATOR_HPP

#include "iterator.hpp"

class NullIterator : public Iterator {
    public:
        bool hasNext() override;
        void* next() override;
};

#endif