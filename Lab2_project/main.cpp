#include <iostream>

// Функция для отображения главного меню программы
void showMenu() {
    std::cout << "--- MENU ---" << std::endl;
    std::cout << "1. Start Program" << std::endl;
    std::cout << "2. Exit" << std::endl;
}

int main() {
    std::cout << std::endl; // Отступ для читаемости
    
    std::cout << "--- РАБОТАЕТ РАЗРАБОТЧИК 1 ---" << std::endl;

    showMenu(); 
    return 0;
}