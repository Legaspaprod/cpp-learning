#include <iostream>

int main() {
    std::cout << "Ввод:\n";
    
    int n{};
    if (!(std::cin >> n)) {
        std::cout << "Некоректный ввод, введите число!\n";
        return 1;
    } else if (n < 1) {
        std::cout << "Число должно быть больше 0\n";
        return 1;
    }

    int sum{};
    std::cout << "Вывод: \n";
    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
        sum += i;
    }

    std::cout << "\nСумма: " << sum << "\n";
    return 0;
}