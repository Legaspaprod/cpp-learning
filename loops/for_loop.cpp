#include <iostream>

bool is_valid(int n) {
    return n >=1;
}

int sum_to_n(int n) {
    return n * (n + 1) / 2;
}

int main() {

    std::cout << "Введите число \n";
    int n{};
    std::cin >> n;

    if (!is_valid(n)) {
        std::cout << "Ошибка: число должно быть >= 1\n"; 
        return 1;
    }

    int sum = sum_to_n(n);
    std::cout << "Сумма чисел от 1 до " << n << " = " << sum << "\n";

    return 0;
} 

