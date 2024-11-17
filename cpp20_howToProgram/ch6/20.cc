#include <iostream>
#include <array>
#include <format>

int cube(int x) {
    return x * x * x;
}

int main() {
    constexpr std::array integers{1, 2, 3, 4, 5};
    for (const int& i : integers) {
        std::cout << std::format("{} ", cube(i));
    }
    std::cout << '\n';
    return 0;
}