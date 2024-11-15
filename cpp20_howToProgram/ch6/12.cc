#include <iostream>
#include <format>
#include <array>
#include <random>

double probability(int sum) {
    int totalOutcomes{36};

    // combinations
    int combinations{0};
    for (int i{1}; i <= 6; ++i) {
        for (int j{1}; j <= 6; ++j) {
            // i and j represents dice
            if (i + j == sum) {
                ++combinations;
            }
        }
    }
    return static_cast<double>(combinations) / totalOutcomes;
}

int main() {
    std::random_device rd;
    std::default_random_engine engine{rd()};
    std::uniform_int_distribution randomDie{1, 6};

    constexpr size_t arraySize{13};
    std::array<int, arraySize> frequencies{};

    for (int i{0}; i < 36'000'000; ++i) {
        ++frequencies.at(randomDie(engine) + randomDie(engine));
    }

    std::cout << std::format("{}{:>13}{:>14}{:>14}\n", "Face", "Frequency", "Probability", "Exp. Freq");
    for (size_t face{2}; face < frequencies.size(); ++face) {
        std::cout << std::format("{:>4}{:>13}{:>14.2f}{:>14}\n", face, frequencies.at(face), probability(face), static_cast<int>(probability(face) * 36'000'000));
    }
    return 0;
}