//
// Created by Administrator on 2021/1/25.
//

#ifndef EXPLICITKEYWORD_ANIMAL_H
#define EXPLICITKEYWORD_ANIMAL_H
#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

class Animal {
private:
    string name;
public:
    Animal(string name);

    const string &getName() const;

    void setName(const string &name);
};



#endif //EXPLICITKEYWORD_ANIMAL_H
