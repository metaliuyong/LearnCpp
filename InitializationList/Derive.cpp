//
// Created by 刘勇 on 2021/2/3.
//

#include "Derive.h"
#include <iostream>

Derive::Derive(int n_d){
    Base();
    num_d = n_d;
    std::cout << "Invoke Derive::Derive(int n_d)" << std::endl;
}

Derive::Derive(int n_b, int n_d) : Base(n_b){
    num_d = n_d;
    std::cout << "Invoke Derive::Derive(int n_b, int n_d)" << std::endl;
}

Derive::~Derive(){
    std::cout << "Invoke Derive::~Derive()" << std::endl;
}