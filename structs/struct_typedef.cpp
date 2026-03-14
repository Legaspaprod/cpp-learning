#include <iostream>

int remove_dublicates(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size; ++k) {
                arr[k] = arr[k + 1];
            }
            size--;
            j--;
            }
        }
    }
    return size;
}

int main() {
    
    int numbers[] = {1, 2, 3, 2, 4, 1, 5};
    for (int x : numbers) {
    std::cout << x << " ";
    }

    return 0;
}