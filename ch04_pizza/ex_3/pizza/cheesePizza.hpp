#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "../factory/ingredientFactory.hpp"
#include "pizza.cpp"

#include <iostream>
using namespace std;

class CheesePizza : public Pizza {
    public:
        IngredientFactory* ingredientFactory;

    public:
        CheesePizza(IngredientFactory* factory);
    
    public:
        void prepare() override {
            cout << "Preparing " + this -> name << ":" << endl;

            this -> dough = ingredientFactory -> createDough();
            cout << "  get " + this -> dough -> name << endl;

            this -> sauce = ingredientFactory -> createSauce();
            cout << "  get " + this -> sauce -> name << endl;
            
            this -> veggies = ingredientFactory -> createVeggies();
            cout << "  get ";
            for(Veggies* v : this -> veggies) {
                cout << v -> name << ". ";
            }
            cout << endl;

            this -> cheese = ingredientFactory -> createCheese();
            cout << "  get " + this -> cheese -> name << endl;

            this -> clam = ingredientFactory -> createClams();
            cout << "  get " + this -> clam -> name << endl;
        }
};

#endif
