#include "menu/menu.cpp"
#include "menu/menu_item.cpp"
#include "waiter/waiter.cpp"

int main(void) {
    MenuComponent* pancake_house_menu = new Menu("Pancake house menu", "Breakfast");
    pancake_house_menu -> add(new MenuItem("K'B Pancake Breakfast", "Pancake with scrambled eggs, and toast", true, 2.99));
    pancake_house_menu -> add(new MenuItem("Regular Pancake Breakfast", "Pancake with fried eggs, sausage", false, 2.99));
    pancake_house_menu -> add(new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49));
    pancake_house_menu -> add(new MenuItem("Waffles", "Wafiles, with your choice of blueberries or strawberries", true, 3.59));

    MenuComponent* diner_menu = new Menu("Diner menu", "Lunch");
    diner_menu -> add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
    diner_menu -> add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99));
    diner_menu -> add(new MenuItem("Soup of the day", "Soup fo the day, with a side of potato salad", false, 3.29));
    diner_menu -> add(new MenuItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05));

    MenuComponent* cafe_menu = new Menu("Cafe menu", "Dinner");
    cafe_menu -> add(new MenuItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99));
    cafe_menu -> add(new MenuItem("Soup of the day", "A cup of the soup of the day, with a salad", false, 3.69));
    cafe_menu -> add(new MenuItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29));

    MenuComponent* dessert_menu = new Menu("Dessert menu", "Dessert");
    dessert_menu -> add(new MenuItem("Apple Pie", "Apple pie with a flakey crust, topped with vanilla ice cream", true, 1.59));
    dessert_menu -> add(new MenuItem("Cheesecake", "Creamy New York cheesecake, with a chocolate graham crust", true, 1.99));
    dessert_menu -> add(new MenuItem("Sorbet", "A scoop of raspberry and a scoop of lime", true, 1.89));

    cafe_menu->add(dessert_menu);

    MenuComponent* all_menu = new Menu("All Menus", "All menus combined");
    all_menu -> add(pancake_house_menu);
    all_menu -> add(diner_menu);
    all_menu -> add(cafe_menu);
    
    Waiter* waiter = new Waiter(all_menu);
    waiter -> printMenu();
}