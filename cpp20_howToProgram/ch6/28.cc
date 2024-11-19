#include <iostream>
#include <vector>
#include <cmath>

int main() {
    constexpr int MAX{1000};
    std::vector<bool> isPrime(MAX, true);

    isPrime.at(0) = isPrime.at(1) = false;

    // Implement the Sieve of Eratosthenes
    for (int i{2}; i < std::sqrt(MAX); ++i) {
        if (isPrime[i]) {
            for (int j{i * i}; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAX; ++i) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
