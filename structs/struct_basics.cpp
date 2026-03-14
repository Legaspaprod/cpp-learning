#include <iostream>

void swap(int* a, int* b) {
    int temp1 = *a;
    int temp2 = *b;
    *a = temp2;
    *b = temp1;
}

int main() {
    int x = 5;
    int y = 10;
    swap(&x, &y);
    std::cout << x << " " << y << "\n";
    return 0;
}