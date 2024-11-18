#include <iostream>
#include <numeric>
#include <format>
#include <ranges>

int main() {
    auto numbers{std::views::iota(1, 11)};
    auto values{numbers | std::views::filter([](const auto& x) {return x % 2 == 0;}) | std::views::transform([](const auto& x) {return x * 3;})};
    std::cout << std::format("Total of triples of even integers from 2-10: {}\n", std::accumulate(std::begin(values), std::end(values), 0));
    return 0;
}