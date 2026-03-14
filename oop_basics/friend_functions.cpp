#include <iostream>
#include <vector>

int main() {

    std::cout << "Введите количество чисел: \n";
    int input{};
    if (!(std::cin >> input)) {
        std::cout << "Ошибка вводите только число!";
        return 1;
    }
    std::cout << "Введите числа: \n";

    std::vector<int> numbers;
    int value{};
    for (int i = 0; i < input; ++i) {
        if (!(std::cin >> value)) {
            std::cout << "Ошибка вводите только числа!";
            return 1;
        }
        numbers.push_back(value);
    }

    for (int i = 0; i < input; ++i) {
        int result = numbers[i];
        int res = 0;
        for (int j = 0; j < input; ++j) {
            if (numbers[j] == result) {
                res++;
            }
        }
        if (res == 1) {
            std::cout << "Первое уникальное число: " << result << "\n";
            return 0; 
        }
    }
    std::cout << "Уникального числа нет." << "\n";
    return 0;
}