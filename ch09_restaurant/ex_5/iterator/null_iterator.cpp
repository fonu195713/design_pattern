#ifndef NULL_ITERATOR_CPP
#define NULL_ITERATOR_CPP

#include "null_iterator.hpp"

bool NullIterator::hasNext() {
    return false;
}

void* NullIterator::next() {
    return nullptr;
}

#endif