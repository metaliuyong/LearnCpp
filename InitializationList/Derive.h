//
// Created by 刘勇 on 2021/2/3.
//

#ifndef INITIALIZATIONLIST_DERIVE_H
#define INITIALIZATIONLIST_DERIVE_H

#include "Base.h"

class Derive : public Base{
private:
    int num_d;
public:
    Derive(int n_d);
    Derive(int n_b, int n_d);
    ~Derive();
};


#endif //INITIALIZATIONLIST_DERIVE_H
