#include <iostream>
#include <format>
#include <array>

int main() {
    const auto display{
        [](const auto& items) {
            for (const auto& item : items) {
                std::cout << std::format("{} ", item);
            }
        }
    };

    // creating a std::array from a built-in array
    const int values1[]{10, 20, 30};
    const auto array1{std::to_array(values1)};
    std::cout << std::format("Size of array1 is {}\n", array1.size());
    std::cout << "array1: ";
    display(array1);

    // creating a std::array from an initializer list
    const auto array2{std::to_array({1, 2, 3, 4})};
    std::cout << std::format("\nSize of array2 is {}\n", array2.size());
    std::cout << "array2: ";
    display(array2);

    std::cout << std::endl;
    return 0;
}