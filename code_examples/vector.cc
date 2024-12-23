#include <iostream>
#include <vector>
#include <stdexcept>

void outputVector(const std::vector<int>& items) {
    for (const int& item : items) {
        std::cout << item << ' ';
    }
    std::cout << '\n';
}

void inputVector(std::vector<int>& items) {
    for (int& item : items) {
        std::cin >> item;
    }
}

int main() {
    std::vector<int> integers1(7);
    std::vector<int> integers2(10);

    // print integers1 size and contents
    std::cout << "Size of vector integers1 is " << integers1.size() << "\nvector after initializaion: ";
    outputVector(integers1);

    // print integers2 size and contents
    std::cout << "\nSize of vector integers2 is " << integers2.size() << "\nvector after initialization: ";
    outputVector(integers2);

    // input and print integers1 and itegers2
    std::cout << "\nEnter 17 integers:\n";
    inputVector(integers1);
    inputVector(integers2);

    std::cout << "\nAfter input, the vectors contain:\n" << "integers1: ";
    outputVector(integers1);
    std::cout << "integers2: ";
    outputVector(integers2);

    // use inequality operator with vector objects
    std::cout << "\nEvaluating: integers1 != integers2\n";
    if (integers1 != integers2) {
        std::cout << "integers1 and integers2 are not equal\n";
    }

    // initializing one vector with the contents of another
    std::vector integers3{integers1};
    std::cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization: ";
    outputVector(integers3);

    // using the at member function to access and modify vector elements
    std::cout << "\nintegers1.at(5) is " << integers1.at(5);
    std::cout << "\n\nAssigning 1000 to integers1.at(5)\n";
    integers1.at(5) = 1000;
    std::cout << "integers1: ";
    outputVector(integers1);

    // Exception handling
    try {
        std::cout << "\nAttempt to display integers1.at(15)\n";
        std::cout << integers1.at(15) << '\n';
    }
    catch (const std::out_of_range& ex) {
        std::cerr << "An exception occurred: " << ex.what() << '\n';
    }

    // Changing the size of a vector
    std::cout << "\nCurrent integers3 size is: " << integers3.size();
    integers3.push_back(1000);
    std::cout << "\nNew integers3 size is: " << integers3.size() << "\nintegers3 now contains: ";
    outputVector(integers3);
    return 0;
}