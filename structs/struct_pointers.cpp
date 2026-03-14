#include <iostream>

void make_zero_if_negative(int& x) {
    if (x < 0) {
        x = 0;
    }
}

int main() {

    std::cout << "Введите число.\n";

    int input{};
    if (!(std::cin >> input)) {
        std::cout << "ошибка. Введите число!\n";
        return 1;
    }

    make_zero_if_negative(input);

    std::cout << input << "\n";

    return 0;
}