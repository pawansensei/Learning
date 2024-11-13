// Duplicate Elimination with array
#include <iostream>
#include <array>
#include <format>
#include <algorithm>

bool check_element(const std::array<int, 20>& a, int e) {
    return std::find(a.begin(), a.end(), e) != a.end();
}

int main() {
    std::array<int, 20> numbers{};
    for (int a; int& num : numbers) {
        std::cin >> a;
        if (check_element(numbers, a)) {
            continue;
        }
        else {
            num = a;
        }
    }

    for (const auto& num : numbers) {
        if (num != 0) {
            std::cout << std::format("{} ", num);
        }
    }
    std::cout << '\n';
    return 0;
}
