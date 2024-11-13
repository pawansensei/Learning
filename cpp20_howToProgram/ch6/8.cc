// Duplicate Elimination with vector
#include <iostream>
#include <vector>
#include <algorithm>
#include <format>

void outputVector(const std::vector<int>& items) {
    for (const int& item : items) {
        std::cout << item << ' ';
    }
    std::cout << '\n';
}

bool check_element(const std::vector<int>& a, int e) {
    return std::find(a.begin(), a.end(), e) != a.end();
}

int main() {
    std::vector<int> numbers;
    int a;
    for (int i{0}; i < 20; ++i) {
        std::cin >> a;
        if (check_element(numbers, a)) {
            continue;
        }
        else {
            numbers.push_back(a);
        }
    }
    outputVector(numbers);
    return 0;
}