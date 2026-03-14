#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::cout << "Введите первое слово: \n";
    std::string input;
    getline(std::cin, input);
    std::string word1;
    for (char c : input) {
        if (std::isalpha(c)) {
            word1 += tolower(c);
        }
    }
    
    std::cout << "Введите второе слово: \n";
    std::string word2;
    getline(std::cin, input);
    for (char c : input) {
        if (std::isalpha(c)) {
            word2 += tolower(c);
        }
    }
    std::cout << "Начинаю проверку... \n";
    
    if (word1.size() != word2.size()) {
        std::cout << "NO\n";
        return 1;
    }

    int size = word1.size();
    for (int i = 0; i < size; ++i) {
        int value1{};
        int value2{};
        char s = word1[i];
        for (char c: word1) {
            if (s == c) {
                value1++;
            }
        }
        for (char c : word2) {
            if (s == c) {
                value2++;
            }
        }
        if (value1 != value2) {
            std::cout << "NO\n";
            return 1;
        }
    }

    std::cout << "YES\n";

    return 0;
}