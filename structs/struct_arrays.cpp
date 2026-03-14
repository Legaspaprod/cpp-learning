#include <iostream>

int find_max(int* arr, int size) {
    int max_value = arr[0];

    for (int i = 0; i < size; ++i) {
        if (arr[i] > max_value ) {
            max_value = arr[i];
        }
    }
    return max_value;
}

int main() {
    int numbers[] = {3, 7, 2, 9, 5};
    std::cout << find_max(numbers, 5);
    return 0;
}