#include <iostream>

int main() {
    // non-constant pointer to non-constant data
    int x = 10;
    int* xPtr = &x;     // non-constant pointer to non-constant data
    *xPtr = 20;         // You can modify the data
    xPtr = nullptr;     // You can modify the pointer

    // non-constant pointer to constant data
    const int y = 10;
    const int* yPtr = &y;   // non-constant pointer to constant data
    // *yPtr = 20;          // Error: cannot modify the data
    yPtr = nullptr;         // You can modify the pointer

    // constant pointer to non-constant data
    int z = 10;
    int* const zPtr = &z;   // constant pointer to non-constant data
    *zPtr = 20              // You can modify the data
    // zPtr = nullptr;      // Error: cannot modify the pointer

    // constant pointer to constant data
    const int w = 10;
    const int* const wPtr = &w;     // Constant pointer to constant data
    // *wPtr = 20;                  // Error: cannot modify the data
    // wPtr = nullptr;              // Error: cannot modify the pointer
    return 0;
}