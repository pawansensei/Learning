#include <iostream>
#include <vector>

void printVector(const std::vector<int>& num, int start, int end) {
    if (start == end) {
        std::cout << num.at(start) << std::endl;
        return;
    }

    std::cout << num.at(start) << " ";
    printVector(num, start + 1, end);
}

int main() {
    std::vector num{1, 2, 3, 4, 5, 6, 7};
    printVector(num, 0, num.size() - 1);
    return 0;
}