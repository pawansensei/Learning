#include <iostream>
#include <array>
#include <format>
#include <ranges>

int main() {
    auto showValues{
        [](auto& values, const std::string& message) {
            std::cout << std::format("{}: ", message);

            for (const auto& value : values) {
                std::cout << std::format("{} ", value);
            }
            std::cout << '\n';
        }
    };
    
    constexpr std::array numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // filter even numbers
    auto values1{numbers | std::views::filter([](const auto& x) {return x % 2 == 0;})};
    showValues(values1, "Even integers");

    // map numbers to their squares
    auto values2{numbers | std::views::transform([](const auto& x) {return x * x;})};
    showValues(values2, "Mapping integers to squares");

    // filer even numbers and then map to their squares
    auto values3{numbers | std::views::filter([](const auto& x) {return x % 2 == 0;}) | std::views::transform([](const auto& x) {return x * x;})};
    showValues(values3, "Squares of even integers");
    return 0;
}