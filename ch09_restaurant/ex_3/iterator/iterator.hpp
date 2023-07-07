#ifndef ITERATOR_HPP
#define ITERATOR_HPP

class Iterator {
    public:
        virtual bool hasNext() = 0;
        virtual void* next() = 0;
        virtual void show_all_info() = 0;
};

#endif