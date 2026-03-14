#include <iostream>
#include <string>
#include <cctype>

std::string clean(const std::string& word) {
    std::string result;
    
    for (char c : word) {
        if (std::isalpha(c)) {
            result += std::tolower(c);
        }
    }
    
    return result;
}

int main() {

    std::cout << "Введите текст: \n";
    std::string word;


    getline(std::cin, word);

    std::string words_end = clean(word);

    for (char x : words_end) {
        std::cout << x;
    }

    std::cout << "\n";

    int left = 0;
    int right = words_end.length() - 1;

    while (left < right) {
        if (words_end[left] == words_end[right]) {
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