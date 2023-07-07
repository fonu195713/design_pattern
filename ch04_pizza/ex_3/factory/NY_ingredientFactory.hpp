#ifndef NY_INGREDIENT_FACTORY_HPP
#define NY_INGREDIENT_FACTORY_HPP

#include "ingredientFactory.hpp"

class NY_IngredientFactory : public IngredientFactory {
    public:
        Dough* createDough() override {
            return (new ThinCrustDough());
        }

        Sauce* createSauce() override {
            return (new MarinaraSauce());
        }

        Cheese* createCheese() override {
            return (new ReggianoCheese());
        }

        vector<Veggies*> createVeggies() {
            vector<Veggies*> vector;
            vector.push_back(new Garlic());
            vector.push_back(new Onion());
            vector.push_back(new Mushroom());
            vector.push_back(new RedPepper());
            return vector;
        }

        Pepperoni* createPepperoni() {
            return (new SlicePepperoni());
        }

        Clams* createClams() {
            return (new FreshClams());
        }
};

#endif