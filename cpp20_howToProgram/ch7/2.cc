#include <iostream>

int main() {
    double number1{7.3};
    double number2{};
    double* doublePtr{nullptr};
    doublePtr = &number1;

    std::cout << "*doublePtr -> number1: " << *doublePtr << '\n';
    doublePtr = &number2;

    std::cout << "*doublePtr -> number2: " << *doublePtr << '\n';
    std::cout << "address of number1: " << &number1 << '\n';
    std::cout << "address stored in doublePtr: " << doublePtr << '\n';
    return 0;
}