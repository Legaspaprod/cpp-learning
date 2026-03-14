#include <iostream>
#include <string>

int main() {

    std::cout << "Введите текст: \n";
    std::string input;
    getline(std::cin, input);

    int size = input.size();
    for(int i = 0; i < size; ++i) {
        char c = input[i];
        if (c == ' ') {
            input.erase(i, 1);
            i--;
            size--;
        }
    }
    for (char c : input) {
        std::cout << c;
    }
    std::cout << "\n";

    return 0;
}