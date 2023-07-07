#ifndef IL_INGREDIENT_FACTORY_HPP
#define IL_INGREDIENT_FACTORY_HPP

#include "ingredientFactory.hpp"

class IL_IngredientFactory : public IngredientFactory {
    public:
        Dough* createDough() override {
            return (new ThickCrustDough());
        }

        Sauce* createSauce() override {
            return (new PlumTomatoSauce());
        }

        Cheese* createCheese() override {
            return (new MozzarellaCheese());
        }

        vector<Veggies*> createVeggies() {
            vector<Veggies*> vector;
            vector.push_back(new BellPepper());
            vector.push_back(new Tomato());
            vector.push_back(new Olives());
            vector.push_back(new Mushroom());
            return vector;
        }

        Pepperoni* createPepperoni() {
            return (new DicedPepperoni());
        }

        Clams* createClams() {
            return (new FrozenClams());
        }
};

#endif