#include <iostream>
#include <format>
#include <span>

int main(int argc, char* argv[]) {
    std::cout << std::format("Number of arguments: {}\n\n", argc);

    // wrap argv in a std::span
    std::span<char*> args(argv, argc);
    for (auto& arg : args) {
        std::cout << std::format("{}\n", arg);
    }
    return 0;
}