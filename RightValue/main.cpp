#include <iostream>

void changeValue(int&& rValue){
    rValue = 10;
}

void func(int&){
    std::cout << "Invoke left reference function." << std::endl;
}

void func(int&&){
    std::cout << "Invoke right reference function." << std::endl;
}

void fun(const int &){
    std::cout << "Invoke const int & function." << std::endl;
}

int main() {
    int&& a = 10;
    a = 20;
    std::cout << a << std::endl;

    int value = 0;
    int& lRef_value = value;
    int&& rRef_value = std::move(value);

    changeValue(std::move(rRef_value));

    std::cout << "value = " << value << std::endl;
    std::cout << "lRef_value = " << lRef_value << std::endl;
    std::cout << "rRef_value = " << rRef_value << std::endl;

    func(10);
    func(a);

    return 0;
}
