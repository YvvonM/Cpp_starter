// bad_example.cpp — intentionally buggy for testing
#include <iostream>

void leak() {
    int* p = new int[100];  // leak: no delete[]
}

int main() {
    int* raw = new int(5);
    std::cout << *raw;      // leak + no null check
    return 0;
}
