#include <iostream>
#include <vector>

void replace_negatives(std::vector<int>& numbers) {
    for (int& x : numbers) {
        if (x < 0) {
            x = 0;
        }
    }
}

int main() {
    std::vector<int> numbers;
    numbers.reserve(5);

    int input{};

    std::cout << "Введите до 5 чисел \n";

    for (int i = 0; i < 5; ++i) {
         if (!(std::cin >> input)) {
            std::cout << "Ошибка ввода\n";
            return 1;
        }
        numbers.push_back(input);
    }

    replace_negatives(numbers);
    
     std::cout << "Итог: ";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}