#include <iostream>

int remove_value(int* arr, int size, int value) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == value) {
      for (int j= i; j < size - 1; j++) {
        arr[j] = arr[j+1];
      }
      size--;
      i--;
    }
  }
  return size;
}

int main() {
    
    int massiv[] = {1, 2, 3, 2, 4, 2, 5, 2, 6};
    std::cout << remove_value(massiv, 9, 2) << "\n";

    return 0;
}