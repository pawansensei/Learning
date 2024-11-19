#include <iostream>
#include <string>
#include <format>
#include <cctype>

bool testPalindrome(const std::string& str, int left, int right) {
    if (left >= right) {
        return true;
    }

    // Ignore non-alphabetical characters
    if (!std::isalnum(str[left])) {
        return testPalindrome(str, left + 1, right);
    }
    if (!std::isalnum(str[right])) {
        return testPalindrome(str, left, right - 1);
    }

    // If characters don't match
    if (std::tolower(str[left]) != std::tolower(str[right])) {
        return false;
    }

    return testPalindrome(str, left + 1, right - 1);
}

bool isPalindrome(const std::string& str) {
    return testPalindrome(str, 0, str.size() - 1);
}

int main() {
    std::string input = "radar";

    if (isPalindrome(input)) {
        std::cout << std::format("The string \"{}\" is a palindrome.\n", input);
    }
    else {
        std::cout << std::format("The string \"{}\" is not a palindrome.\n", input);
    }
    return 0;
}