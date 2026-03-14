#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

int main() {

    std::cout << "Введите текст: \n";
    std::string input;
    getline(std::cin, input);

    std::string word;
    for (char c : input) {
        word += tolower(c);
        
    }
    std::string rem = "aeiouy";
    for (char c: word) {
        for (char s : rem) {
            if (c == s) {
                word.erase(
                    std::remove(word.begin(), word.end(), c),
                    word.end()
                );
            }
        }
    }

    std::cout << word << "\n";

    return 0;
}