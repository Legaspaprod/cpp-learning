#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int input{};
    std::cout << "Введите массив из максимум 10 чисел. Для досрочного завершения введите число 333: \n";
    std::vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка вводите только числа!";
            return 1;
        }
        if (input == 333) {
            break;
        }
        numbers.push_back(input);
        if (numbers.empty()) {
            std::cout << "Массив пуст.\n";
            return 0;
        }
    }

    int size = numbers.size();
    int current_sum = numbers[0];
    int max_sum = numbers[0];

    for (int i = 1; i < size; ++i) {
        current_sum = std::max(numbers[i], current_sum + numbers[i]);
        max_sum = std::max(max_sum, current_sum);
    }
    std::cout << max_sum << "\n";

    return 0;
}