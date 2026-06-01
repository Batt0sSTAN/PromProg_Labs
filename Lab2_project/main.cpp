#include <iostream>

// Функция для отображения главного меню программы
void showMenu() {
    std::cout << "--- MENU ---" << std::endl;
    std::cout << "1. Start Program" << std::endl;
    std::cout << "2. Exit" << std::endl;
}

int factorial(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= num;
    }
    return result;
}

int main() {
    std::cout << std::endl;

    std::cout << "--- ТЕПЕРЬ СДЕЛАЛ РАЗРАБОТЧИК 2 ---" << std::endl;
    std::cout << factorial(5);
    showMenu(); 
    return 0;
}