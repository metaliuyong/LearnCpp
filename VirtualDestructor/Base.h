//
// Created by 刘勇 on 2021/2/2.
//

#ifndef VIRTUALDESTRUCTOR_BASE_H
#define VIRTUALDESTRUCTOR_BASE_H


class Base {
private:
    int number;
    int *pNumber;
public:
    Base();
    ~Base();
};


#endif //VIRTUALDESTRUCTOR_BASE_H
