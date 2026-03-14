#include <iostream>
#include <string>
#include <cctype>

void make_upper(std::string& s) {

    for (char& c : s) {
        c = std::toupper(c);
    }
}

int main() {

    std::string text;

    std::cout << "Enter word: ";
    std::cin >> text;

    make_upper(text);

    std::cout << text << std::endl;

    return 0;
}
