#include <iostream>

bool is_valid(int n) {
    return n > 0;
}

long long factorial(int n) {
    long long nsum = 1;
    for (int i = 1; i <= n; ++i) {
        nsum *= i;
    }
    return nsum;
}

int main() {
    std::cout << "Введите число:\n";
    int n{};
    std::cin >> n;
    if (!is_valid(n)) {
        std::cout << "Ошибка: число должно быть > 0\n"; 
        return 1;
    }

    std::cout << "Факториал " << n << "! = " << factorial(n) << "\n";
    return 0;
}