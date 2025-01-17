#include <iostream>
#include <string>
#include <format>

void displayResult(const std::string& s, int result) {
    if (result == 0) {
        std::cout << std::format("{} == 0\n", s);
    }
    else if (result > 0) {
        std::cout << std::format("{} > 0\n", s);
    }
    else {
        std::cout << std::format("{} < 0\n", s);
    }
}

int main() {
    const std::string s1{"Testing the comparison functions."};
    const std::string s2{"Hello"};
    const std::string s3{"stinger"};
    const std::string s4{s2};

    std::cout << std::format("s1: {}\ns2: {}\ns3: {}\ns4: {}\n\n", s1, s2, s3, s4);

    if (s1 > s4) {
        // Comparison are performed lexicographically - that is, based on the integer value of each character.
        std::cout << "s1 > s4\n";
    }

    displayResult("s1.compare(s2)", s1.compare(s2));

    // 2 and 5 specify the starting index and length of the portion of s1 to compare with s3.
    displayResult("s1.compare(2, 5, s3, 0, 5)", s1.compare(2, 5, s3, 0, 5));

    // The first two are the starting index and length, and the last argument is the comparison string.
    displayResult("s4.compare(0, s2.size(), s2)", s4.compare(0, s2.size(), s2));

    // compares the first 3 characters in s2 to s4.
    displayResult("s2.compare(0, 3, s4)", s2.compare(0, 3, s4));
    
    return 0;
}
