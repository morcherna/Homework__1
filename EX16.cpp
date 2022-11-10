// Определить, является ли шестизначное число "счастливым"
#include <iostream>

int Sum_of_the_half(int x, int result){
    while (x>0){
        int x1 = x%10;//фиксируем остаток
        x=x/10;//убираем остаток от данного числа
        result = result+x1;// склдавыем остаток
    }
    return result;
}

int main() {
    std::cout << "Enter the a six-digit number" << std::endl; //просим пользователя ввести число
    int a = 0;
    std::cin >> a;
    if (a>=1000000 || a<=99999){//ставим ограничения на вводимое число
        std::cout << "you must enter the six-digit number" << std::endl;
        abort();
    }
    int first_half = a/1000;//фиксируем остаток, это будет вторая половина
    int second_half =a%1000;//убираем остаток от данного числа
    int sum_first_half = 0 ;//инициализируем аргумент
    int sum_second_half = 0;//инициализируем аргумент
    sum_first_half = Sum_of_the_half(first_half, sum_first_half);// считаем сумму первой половины
    sum_second_half = Sum_of_the_half(second_half,sum_second_half);// считаем сумму второй половины
    if (sum_first_half == sum_second_half){//сравниваем их
        std::cout << "six-digit number is lucky" << std::endl;
    } else {std::cout << "six-digit number is not lucky" << std::endl;}
    return 0;
}
