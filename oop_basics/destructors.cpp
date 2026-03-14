#include <iostream>
#include <string>
#include <cctype>

void words_value(std::string& text_min) {
    int words_value = 1;
    
    if (text_min.empty()) {
        std::cout << "Количество слов в тексте: 0\n";
        return;
    }
    
    for (size_t i = 0; i < text_min.length(); ++i) {
        if (text_min[i] == ' ') {
            if (i > 0 && i < text_min.length() - 1) {
                words_value++;
            }
        }
    }
    
    bool allSpaces = true;
    for (char c : text_min) {
        if (c != ' ') {
            allSpaces = false;
            break;
        }
    }
    if (allSpaces) words_value = 0;
    
    std::cout << "Количество слов в тексте: " << words_value << "\n";
}

void text_value_function(std::string& text_value) {
    int text_val = text_value.length();
    std::cout << "Количество букв в тексте: " << text_val << "\n";
}

void number_value(std::string& text_value) {
    int numbers{};
    for (const char y : text_value) {
        if (std::isdigit(y)) {
            numbers++;
        }
    }
    std::cout << "Количество цифр в тексте: " << numbers << "\n";
}

void vovel_letter(std::string& text_value) {
    int vovil_letter_num{};
    std::string vowels = "aeiouаеёиоуыэюя";
    for (const char v : text_value) {
        for (char vowel : vowels) {
            if (v == vowel) {
                vovil_letter_num++;
                break;
            }
        }
    }
    std::cout << "Количество гласных букв в тексте: " << vovil_letter_num << "\n";
}

int main() {

    std::cout << "Введите текст: \n";
    std::string text;
    getline(std::cin, text);

    std::string text_min;
    for (char c : text) {
        text_min += tolower(c);
    }
    words_value(text_min);

    std::string text_value;
    for (char c : text) {
        if (std::isalpha(c)) {
            text_value += std::tolower(c);
        }
    }
    
    text_value_function(text_value);
    number_value(text_value);
    vovel_letter(text_value);

    return 0;
}