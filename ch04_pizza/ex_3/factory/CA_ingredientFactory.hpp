#ifndef CA_INGREDIENT_FACTORY_HPP
#define CA_INGREDIENT_FACTORY_HPP

#include "ingredientFactory.hpp"

class CA_IngredientFactory : public IngredientFactory {
    public:
        Dough* createDough() override {
            return (new VeryThinCrust());
        }

        Sauce* createSauce() override {
            return (new BruschettaSauce());
        }

        Cheese* createCheese() override {
            return (new CoatCheese());
        }

        vector<Veggies*> createVeggies() {
            vector<Veggies*> vector;
            vector.push_back(new Corn());
            vector.push_back(new Artichoke());
            vector.push_back(new Zucchini());
            vector.push_back(new CaramelizedOnion());
            return vector;
        }

        Pepperoni* createPepperoni() {
            return (new AmericanSausages());
        }

        Clams* createClams() {
            return (new Calamari());
        }
};

#endif