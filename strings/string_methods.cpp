#include <iostream>
#include <cctype>
#include <string>



void make_upper(std::string& s) {
    for (char& c : s) {
        c = static_cast<char>(std::toupper(c));
    }
}

int main() {

    std::cout << "Введите слово \n";

    std::string input;
    std::cin >> input;
    make_upper(input);
    std::cout <<  input << "\n"; 

    }
   