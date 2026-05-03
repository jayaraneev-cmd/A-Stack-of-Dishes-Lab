#include <iostream>
#include "src/dish_stack.hpp"

int main() {
    DishStack stack;

    Dish one("A dish with one fish pattern on it");
    Dish two("A dish with two fish patterns on it");
    Dish red("A dish with a red fish pattern on it");
    Dish blue("A dish with a blue fish pattern on it");

    std::cout << "Initial size: " << stack.size() << std::endl;

    stack.push(one);
    stack.push(two);
    stack.push(red);
    stack.push(blue);

    std::cout << "Size after pushes: " << stack.size() << std::endl;

    Dish peeked = stack.peek();
    std::cout << "Peek: " << peeked.get_description() << std::endl;

    Dish popped = stack.pop();
    std::cout << "Popped: " << popped.get_description() << std::endl;

    Dish popped2 = stack.pop();
    std::cout << "Popped again: " << popped2.get_description() << std::endl;

    std::cout << "Final size: " << stack.size() << std::endl;

    return 0;
}