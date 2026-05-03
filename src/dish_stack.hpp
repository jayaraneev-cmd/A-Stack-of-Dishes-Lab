#ifndef DISH_STACK_HPP
#define DISH_STACK_HPP
#include "dish.hpp"
#include <iostream>
using namespace std;

class DishStack {
private:
    static const int MAX_SIZE = 10;   // fixed capacity
    Dish* arr[MAX_SIZE];
    int top;

public:
    DishStack() {
        top = -1;
    }

    // PUSH
    void push(Dish dish) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack is full!" << endl;
            return;
        }

        top++;
        arr[top] = new Dish(dish);
    }

    // POP
    Dish pop() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return Dish("EMPTY");
        }

        Dish result = *arr[top];
        delete arr[top];
        top--;
        return result;
    }

    // PEEK
    Dish peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return Dish("EMPTY");
        }

        return *arr[top];
    }

    // SIZE
    int size() {
        return top + 1;
    }

    // destructor (prevents memory leaks)
    ~DishStack() {
        while (top >= 0) {
            delete arr[top];
            top--;
        }
    }
};

#endif