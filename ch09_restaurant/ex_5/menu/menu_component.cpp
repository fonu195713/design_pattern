#ifndef MENU_COMPONEMT_CPP
#define MENU_COMPONEMT_CPP

#include "menu_component.hpp"

#include <exception>
#include <string>
using namespace std;

class UnsupportedOperationException : public exception {
    private:
        string message;

    public:
        explicit UnsupportedOperationException(const string& msg) : message(msg) {}

        const char* what() const noexcept override {
            return message.c_str();
        }
};

void MenuComponent::add(MenuComponent* component) {
    throw UnsupportedOperationException("This operation is not supported.");
}

void MenuComponent::remove(MenuComponent* component) {
    throw UnsupportedOperationException("This operation is not supported.");
}

MenuComponent* MenuComponent::getChild(int i) {
    throw UnsupportedOperationException("This operation is not supported.");
}

string MenuComponent::getName() {
    throw UnsupportedOperationException("This operation is not supported.");
}

string MenuComponent::getDescription() {
    throw UnsupportedOperationException("This operation is not supported.");
}

bool MenuComponent::isVegetarian() {
    throw UnsupportedOperationException("This operation is not supported.");
}

double MenuComponent::getPrice() {
    throw UnsupportedOperationException("This operation is not supported.");
}

Iterator* MenuComponent::createIterator() {
    throw UnsupportedOperationException("This operation is not supported.");
}

void MenuComponent::print() {
    throw UnsupportedOperationException("This operation is not supported.");
}

#endif