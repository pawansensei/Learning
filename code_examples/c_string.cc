#include <iostream>
#include <array>
#include <format>

int main() {
    const auto display{
        [](const auto& items) {
            for (const auto& item : items) {
                std::cout << std::format("{} ", item);
            }
        }
    };

    // creates a one-element array containing a const char* pointing to the C-string "abc"
    const auto array1{std::array{"abc"}};
    std::cout << std::format("array1.size() = {}\narray1: ", array1.size());
    display(array1);

    // creates a std::array of chars containing elements for each character and the terminating null char.
    const auto array2{std::to_array("C++20")};
    std::cout << std::format("\n\narray2.size() = {}\narray2: ", array2.size());
    display(array2);
    std::cout << '\n';
    return 0;
}