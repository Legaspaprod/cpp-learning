#include <iostream>
#include <string>

int main() {

    std::cout << "Введите слово: \n";
    std::string word;

    getline(std::cin, word);

    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] == word[right]) {
            left++;
            right--;
        } else {
            std::cout << "Нет \n";
            return 1;
        }
    }

    std::cout << "Да \n";

    return 0;
}