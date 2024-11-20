#include <format>
#include <iostream>
#include <vector>

int recursiveMinimum(const std::vector<int>& num, int start, int end) {
    if (start == end) {
        return num[start];
    }

    int minimum{recursiveMinimum(num, start + 1, end)};
    return std::min(num[start], minimum);
}

int main() {
    std::vector num{5, 2, 6, 7, 9, 4, 2, 1, 2};
    int minElement{recursiveMinimum(num, 0, num.size() - 1)};
    std::cout << std::format("The minimum element in the array is: {}\n", minElement);
    return 0;
}