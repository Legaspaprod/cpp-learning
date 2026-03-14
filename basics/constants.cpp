#include <iostream>

int main() {
    std::cout << "Привет, сколько тебе лет?\n";
    int age{};
    std::cin >> age;
    if ( age < 18) {
        std::cout << "Доступ запрещен!\n";
    } else if ( age > 65) {
        std::cout << "Пенсионный возраст!\n";
    } else {
        std::cout << "Рабочий возраст\n";
    }
    return 0;
}