#include <iostream>
#include <vector>

int main() {

    std::cout << "Введите какое количество чисел вы хотите ввести? \n";
    int value{};

    if (!(std::cin >> value) || value < 2) {
        std::cout << "Ошибка, введите число больше 2! \n";
        return 1;
    }

    std::vector<int> arr;
    arr.reserve(value);
    int input;

    for (int i = 0; i < value; ++i) {
        if(!(std::cin >> input)) {
            std::cout << "Ошибка, вводите только числа! \n";
            return 1;
        }
        arr.push_back(input);
    }
    
    int max1 = arr[0];
    int max2 = arr[1];
    if (max1 < max2) {
        max1 = arr[1];
        max2 = arr[0];
    }

    for ( const int x : arr) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x < max1) {
            max2 = x;
        }
    }

    if (max1 == max2) {
        std::cout << "Максимум: " << max1 << "\n" << "Второй максимума нет. \n";
    } else {
        std::cout << "Максимум: " << max1 << "\n" << "Второй максимум: " << max2 << "\n";
    }
    return 0;
}