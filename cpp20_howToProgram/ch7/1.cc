#include <iostream>

int main() {
    constexpr int SIZE{10};
    double numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    double* nPtr = numbers;

    // Display elements using array subscript
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Pointer arithmetic using nPtr
    nPtr = numbers;  // First assignment to point to the start of the array
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << *(nPtr + i) << " ";
    }
    std::cout << std::endl;

    // Pointer arithmetic using numbers as the pointer
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << *(numbers + i) << " ";
    }
    std::cout << std::endl;

    // Pointer subscript notation
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << nPtr[i] << " ";
    }
    std::cout << std::endl;

    // Access element 3 using different notations
    std::cout << numbers[3] << "\n";
    std::cout << *(numbers + 3) << "\n";
    std::cout << nPtr[3] << "\n";
    std::cout << *(nPtr + 3) << "\n";

    // Address and value at nPtr + 8
    double* address = nPtr + 8;
    std::cout << "Address: " << address << ", Value: " << *address << "\n";

    // Pointer arithmetic with nPtr -= 4
    nPtr = &numbers[5];
    nPtr -= 4;
    std::cout << "Address: " << nPtr << ", Value: " << *nPtr << "\n";

    return 0;
}
