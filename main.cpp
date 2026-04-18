#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("in.txt");
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл!" << std::endl;
        return 1;
    }

    std::string word;
    while (file >> word) {
        std::cout << word << std::endl;
    }

    file.close();
    return 0;
}
