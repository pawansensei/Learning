#include <iostream>

int main() {
    long value1{200'000};
    long value2{};

    long* longPtr = &value1;
    std::cout << "Value pointed to by longPtr: " << *longPtr << std::endl;

    value2 = *longPtr;
    std::cout << "Value of value2: " << value2 << std::endl;
    std::cout << "Address of value1: " << &value1 << std::endl;
    std::cout << "Address stored in longPtr: " << longPtr << std::endl;

    if (&value1 == longPtr) {
        std::cout << "Yes the address stored in longPtr is the same as the address of value1.\n";
    }
    else {
        std::cout << "No the address stored in longPtr is not the same as the address of value1.\n";
    }
    return 0;
}