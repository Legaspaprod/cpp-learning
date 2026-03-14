#include <iostream>
#include <vector>

int main() {

    std::cout << "Введито количество чисел. \n";
    int value{};
    if (!(std::cin >> value)) {
        std::cout << "ошибка вводите только числа. \n";
        return 1;
    }

    std::vector<int> numbers;
    numbers.reserve(value);

    std::cout << "Вводите числа: \n";
    int number{};
    for (int i = 0; i < value; ++i) {
        if (!(std::cin >> number)) {
            std::cout << "Ошибка вводите только числа.\n";
            return 1;
        }
        numbers.push_back(number);
    }

    for (int i = 0; i < value; ++i) {
        for (int j = i + 1; j < value; ++j) {
            if (numbers[i] == numbers[j]) {
                for (int k = j; k < value - 1; ++k) {
                numbers[k] = numbers[k + 1];
            }
            value--;
            j--;
            }
        }
    }
    
    
    for (int i = 0; i < value; ++i) {
        std::cout << numbers[i] << " ";
    }


    return 0;
}