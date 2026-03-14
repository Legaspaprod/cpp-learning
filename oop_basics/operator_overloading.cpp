#include <iostream>
#include <vector>

int main() {

    int input{};
    std::cout << "Введите первый массив, имеющий максимально 10 значений. Для досрочного завершения введите число 333: \n";
    std::vector<int> numbers_one;
    for (int i = 0; i < 10; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка вводите только числа.";
            return 1;
        }
        if (input == 333) {
            break;
        }
        numbers_one.push_back(input);
    }

    std::cout << "Введите второй массив, имеющий максимально 10 значений. Для досрочного завершения введите число 333\n";
    std::vector<int> numbers_two;
    for (int i = 0; i < 10; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка вводите только числа.";
            return 1;
        }
        if (input == 333) {
            break;
        }
        numbers_two.push_back(input);
    }

    std::cout << "Идет проверка...\n";

    if (numbers_one.size() != numbers_two.size()) {
        std::cout << "NO!\n";
        return 0;
    }

    

    int size_one = numbers_one.size();
    for (int i = 0; i < size_one; ++i) {
        int number = numbers_one[i];
        int value{};
        int value_two{};
        for (int j = 0; j < size_one; ++j) {
            if (numbers_one[j] == number) {
                value++;
            }
            if (numbers_two[j] == number) {
                value_two++;
            }
        }
        if (value != value_two) {
            std::cout << "NO!";
            return 0;
        }
    }

    std::cout << "YES!\n";

    return 0;
}