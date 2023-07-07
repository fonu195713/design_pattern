#ifndef SUBJECT_HPP
#define SUBJECT_HPP

class Observer;

class Subject {
    public:
        virtual void registerObserver(Observer* o) = 0;
        virtual void removeObserver(Observer* o) = 0;
        virtual void notifyObservers() = 0;
};

#endif