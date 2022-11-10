//Дано десятичное четырехзначное число. Найти сумму его цифр.
#include <iostream>

void TheSum(int x){
    int result = 0;
    while (x>0){
        int x1 = x%10;//фиксируем остаток
        x=x/10;//убираем остаток от данного числа
        result = result+x1;// склдавыем остаток
    }
    std::cout << "The Sum: " << result << std::endl; //выводим рузультат
}


int main() {
    std::cout << "Enter the number" << std::endl; //просим пользователя ввести данные
    int x=0;
    std::cin >> x;
    TheSum(x);
    return 0;
}
