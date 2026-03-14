#include <iostream>
#include <vector>
#include <string>

std::string longest_word(const std::vector<std::string>& words) {
    std::size_t max_index = 0;

    for (std::size_t i = 1; i < words.size(); ++i) {
        if (words[i].size() > words[max_index].size()) {
            max_index = i;
        }
    }

    return words[max_index];
}

int main() {
    std::vector<std::string> words;
    words.reserve(3);

    std::cout << "Введите 3 слова:\n";

    std::string input;
    for (int i = 0; i < 3; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка ввода\n";
            return 1;
        }
        words.push_back(input);
    }

    std::cout << "Самое длинное слово: "  << longest_word(words) << "\n";
    return 0;
}