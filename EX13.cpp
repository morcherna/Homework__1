//Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
//произведения этих чисел. Программа сообщает тестируемому ошибся он или нет
#include <iostream>

int main() {
    int x = rand() % 9;//выбираем любое число от 1 до 9
    int y = rand() % 9;//выбираем 2 любое число от 1 до 9
    std::cout << "find a multiplication of the: "<< x << ", " << y << std::endl; //выводим эти числа
    std::cout << "Enter the multiplication" << std::endl; //просим пользователя ввести их произведение
    int a = 0;
    std::cin >> a;
    if (a==x*y){// проверяем корректность введенного произведения
        std::cout << "the answer is correct" << std::endl;
    } else {
        std::cout << "the answer is not correct" << std::endl;
    }
    return 0;
}