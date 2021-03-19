#include <iostream>
#include "Animal.h"
#include "Number.h"

using std::string, std::cout, std::endl;

void printAnimalName(Animal animal){
    cout << animal.getName();
}

void printNumber(Number num){

}

int main() {
    printNumber(1);
    return 0;
}
