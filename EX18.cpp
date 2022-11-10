//Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
#include <iostream>

int main() {
    std::cout << "Enter the number" << std::endl; //просим пользователя ввести число
    int a = 0;
    std::cin >> a;
    if (a>=10000 || a<=999){// ставим ограничения на вводимое число
        std::cout << "The number should be a four-digit" << std::endl;
        exit(0);
    } else if (a/1000 == a % 10 && (a/100)%10 == (a % 100)/10){//сравниваем крайние числа и числа в середине
        std::cout << "The number is a palindrome" << std::endl;// если они равны значит число палиндром
    } else {
        std::cout << "The number is not a palindrome" << std::endl;// если нет, значит нет :(
    }
    return 0;
}
