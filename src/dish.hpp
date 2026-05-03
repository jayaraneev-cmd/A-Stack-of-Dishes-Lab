#ifndef DISH_HPP
#define DISH_HPP

#include <string>
using namespace std;

class Dish {
private:
    string description;

public:
    Dish(string description) {
        this->description = description;
    }

    string get_description() {
        return this->description;
    }
};

#endif