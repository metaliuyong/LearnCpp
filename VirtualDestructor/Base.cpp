//
// Created by 刘勇 on 2021/2/2.
//

#include "Base.h"
#include <iostream>

Base::Base(){
    std::cout << "Invoke constructor of class Base." << std::endl;
}

Base::~Base(){
    std::cout << "Iovoke destructor of class Base." << std::endl;
}