//
// Created by 刘勇 on 2021/2/3.
//

#include "Base.h"
#include <iostream>

Base::Base(){
    num_b = 0;
    std::cout << "Invoke Base::Base()" << std::endl;
}

Base::Base(int n){
    num_b = n;
    std::cout << "Invoke Base::Base(int n)" << std::endl;
}

Base::~Base(){
    std::cout << "Invoke Base::~Base()" << std::endl;
}