#include <iostream>
#include <format>
#include <array>
#include <random>

int main() {
    std::random_device rd;
    std::default_random_engine engine{rd()};
    std::uniform_int_distribution randomDie{1, 2};

    constexpr size_t arraySize{3};
    std::array<int, arraySize> frequencies{};

    for (int i{0}; i < 60'000'000; ++i) {
        ++frequencies.at(randomDie(engine));
    }

    std::cout << std::format("{}{:>13}\t{:>4}\n", "Face", "Frequency", "\%age");
    for (size_t face{1}; face < frequencies.size(); ++face) {
        std::cout << std::format("{:>4}{:>13}\t{:>3}%\n", face, frequencies.at(face), static_cast<int>(frequencies.at(face) / 600'000));
    }
    return 0;
}