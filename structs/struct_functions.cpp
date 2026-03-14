#include <iostream>

void zero_negatives(int* arr, int size) {
    for(int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {

    int numbers[] = {3, -5, 7, -1, 2};
    zero_negatives(numbers, 5);
    for(int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    return 0;
}