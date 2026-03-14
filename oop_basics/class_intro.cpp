#include <iostream>
#include <string>

int main() {

    std::cout << "Введите слово на английском языке: \n";

    std::string word;
    
    getline(std::cin , word, '\n');
    
    int value{};
    int value_num = word.length();
    for (int i = 0; i < value_num; ++i) {
        
        if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' ) {
            value++;
        }
    
    }
    
    std::cout << value << "\n";

    return 0;
}