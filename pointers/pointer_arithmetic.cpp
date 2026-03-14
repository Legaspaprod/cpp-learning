#include <iostream>

void function1() {
    std::cout << "Задача №1\n";

    int a = 10;
    std::cout << "Значение а: " << a << "\n";
    std::cout << "Адрес а: " << &a << "\n";

    int* ptr = &a;
    std::cout << "Значение ptr: " << ptr << "\n";
    std::cout << "Значесние *ptr: " << *ptr << "\n";

    std::cout << "\n";
    std::cout << "\n";
}

void function2() {
    std::cout << "Задача №2\n";

    int a = 10;
    std::cout << "Значение а: " << a << "\n";
    std::cout << "Адрес а: " << &a << "\n";

    int* ptr = &a;
    *ptr = 50;
    std::cout << "Значение ptr: " << ptr << "\n";
    std::cout << "Значесние *ptr: " << *ptr << "\n";
    std::cout << "Значение а: " << a << "\n";

    std::cout << "\n";
    std::cout << "\n";
}

void function3() {
    std::cout << "Задача №2\n";

    int a2 = 5;
    int b2 = 20;
    int* ptr2 = &a2;

    ptr2 = &b2;

    std::cout << "Значение а2: " << a2 << "\n";
    std::cout << "Значение b2: " << b2 << "\n";
    std::cout << "Значесние ptr2: " << ptr2 << "\n";
    std::cout << "*ptr2: " << *ptr2 << "\n";
    std::cout << "Значение b2: " << b2 << "\n";

    std::cout << "\n";
    std::cout << "\n";
}

int main() {

    function1();
    function2();
    function3();

    return 0;
}