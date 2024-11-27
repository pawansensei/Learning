#include <iostream>
#include <format>

int main() {
    constexpr int SIZE{5};
    int values[SIZE]{2, 4, 6, 8, 10};

    int* vPtr = values;

    std::cout << std::format("Array elements (using array subscript notation): ");
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << std::format("{} ", values[i]);
    }
    std::cout << std::endl;

    vPtr = &values[0];
    std::cout << std::format("Array elements (using pointer/offset notation): ");
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << *(vPtr + i) << " ";
    }
    std::cout << std::endl;

    std::cout << std::format("Array elements (using pointer/offset notation with array name): ");
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << *(values + i) << " ";
    }
    std::cout << std::endl;

    std::cout << std::format("Array elements (using subscript notation and pointer to array): ");
    for (size_t i{0}; i < SIZE; ++i) {
        std::cout << vPtr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Element 4 using various notations: ";
    std::cout << values[4] << " ";
    std::cout << *(values + 4) << " ";
    std::cout << vPtr[4] << " ";
    std::cout << *(vPtr + 4) << std::endl;

    std::cout << "Address referenced by vPtr + 3: " << (vPtr + 3) << std::endl;
    std::cout << "Value stored at vPtr + 3: " << *(vPtr + 3) << std::endl;

    vPtr = &values[4];
    std::cout << "Address referenced by vPtr -= 4: " << (vPtr - 4) << std::endl;
    std::cout << "Value stored at vPtr -= 4: " << *(vPtr - 4) << std::endl;
    return 0;
}
