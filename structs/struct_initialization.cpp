#include <iostream>

void increment(int& x) {
    x++;
}

int main() {

    int a = 5;
    increment(a);
    std::cout << a << "\n";

    return 0;
}