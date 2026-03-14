#include <iostream>
#include <vector>

void replace_negatives(std::vector<int>& v) {
    for (int& y : v) {
        if (y < 0) {
            y = 0;
        }
    }
}

int main() {

    std::cout << "Введите количество чисел, которые хотите ввести.\n";
    int input{};
    if (!(std::cin >> input)) {
        std::cout << "Ошибка введите число!\n";
        return 1;
    }

    std::vector<int> numbers;
    numbers.reserve(input);

    std::cout << "Введите числа.\n";

    int numbers_input{};

    for (int i = 0; i < input; ++i) {
        if (!(std::cin >> numbers_input)) {
            std::cout << "Ошибка введите число!\n";
            return 1;
        } 
        numbers.push_back(numbers_input);
    }

    replace_negatives(numbers);

    for (const int x : numbers) {
        std::cout << x << " ";
    }

    std::cout << "\n";

    return 0;
}