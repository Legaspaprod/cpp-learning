#include <iostream>
#include <vector>

int sum_vector(const std::vector<int>& v) {
    int sum{};
    for ( int x : v) {
        sum += x;
    }
    return sum;
}

int main() {
    
    std::vector<int> numbers;
    numbers.reserve(5);

    std::cout << "Введите числа\n";

    int value{};

    for (int i = 0; i < 5; ++i) {
        if (!(std::cin >> value)) {
            std::cout << "Ошибка ввода \n";
            return 1;
        }

        numbers.push_back(value);
        
    }

    const int result = sum_vector(numbers);
    std::cout << result << "\n";

    return 0;
}