#include <iostream>
#include <string>

void stringReverse(const std::string& str, int index) {
    if (index == str.length()) {
        return;
    }
    stringReverse(str, index + 1);
    std::cout << str[index];
}

int main() {
    std::string input {"Hello there, how are you?"};
    stringReverse(input, 0);
    std::cout << std::endl;
    return 0;
}