#include <iostream>
#include <string>
#include <format>

int main() {
    std::string s1{"cat"};
    std::string s2, s3;

    s2 = s1;
    s3.assign(s1);
    std::cout << std::format("s1: {}\ns2: {}\ns3: {}\n", s1, s2, s3);

    s2.at(0) = 'r';
    s3.at(2) = 'r';
    std::cout << std::format("\nAfter changes:\ns1: {}\ns2: {}\ns3: {}\n", s1, s2, s3);

    std::cout << "\nAfter concatenations:\n";
    std::string s4{s1 + "apult"};
    s1.append("acomb");
    s3 += "pet";
    std::cout << std::format("s1: {}\ns3: {}\ns4: {}\n", s1, s3, s4);

    std::string s5;
    // target.assign(source, start, numberOfChars);
    s5.append(s1, 4, s1.size() - 4);
    std::cout << std::format("s5: {}\n", s5);
    return 0;
}