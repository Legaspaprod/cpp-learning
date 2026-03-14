#include <iostream>
#include <string>


int main() {
    std::cout<< "Введите имя: \n";
    std::string name;
    getline(std::cin, name);
    std::cout<< "Привет, "<< name << "!\n";
    return 0;
}