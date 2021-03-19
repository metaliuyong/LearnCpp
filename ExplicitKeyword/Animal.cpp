//
// Created by Administrator on 2021/1/25.
//

#include "Animal.h"

Animal::Animal(string name){
    this->name = name;
    cout << "The constructor of Animal Class has been called." << endl;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}
