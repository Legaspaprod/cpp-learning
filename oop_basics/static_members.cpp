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

    int numnum{};
    for (int i = 0; i < input; ++i) {
        int num_null = 0;
        for (int j = 0; j < input; ++j) {
            if (numbers[j] != 0) {
                numbers[num_null] = numbers[j];
                num_null++;
            } else {
                numnum++;
            }
        }
    }
    
    for (int i = numnum; i < input; ++i) {
        numbers[i] = 0;
        numnum++;
    }

    for (int i = 0; i < input; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}