#ifndef INGREDIENT_FACTORY_HPP
#define INGREDIENT_FACTORY_HPP

#include "../ingredient/cheese.hpp"
#include "../ingredient/clams.hpp"
#include "../ingredient/dough.hpp"
#include "../ingredient/pepperoni.hpp"
#include "../ingredient/sauce.hpp"
#include "../ingredient/veggies.hpp"

#include <vector>
using namespace std;

class IngredientFactory {
    public:
        virtual Dough* createDough() = 0;
        virtual Sauce* createSauce() = 0;
        virtual Cheese* createCheese() = 0;
        virtual vector<Veggies*> createVeggies() = 0;
        virtual Pepperoni* createPepperoni() = 0;
        virtual Clams* createClams() = 0;
};

#endif