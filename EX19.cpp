//Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
//19.2 кратна ли 7 сумма его цифр
#include <iostream>

int TheMultiplication(int x) {
    int result = 1;
    while (x > 0) {
        int x1 = x % 10;//фиксируем остаток
        x = x / 10;//убираем остаток от данного числа
        result = result * x1;// умножаем остаток
    }
    std::cout << "The Multiplication: " << result << std::endl; //выводим рузультат
    return result;
}

int TheSum(int x){
    int result = 0;
    while (x>0){
        int x1 = x%10;//фиксируем остаток
        x=x/10;//убираем остаток от данного числа
        result = result+x1;// склдавыем остаток
    }
    std::cout << "The Sum: " << result << std::endl; //выводим рузультат
    return result;
}

int main() {
    std::cout << "Enter the number" << std::endl; //просим пользователя ввести число
    int a = 0;
    std::cin >> a;
    if (a<=99 || a>=1000){//ставим ограничения на вводимое число
        std::cout << "number should be three-digit" << std::endl;
        exit(0);
    }
//19.1
    std::cout << "Enter the number b" << std::endl; //просим пользователя ввести 2 параметр
    int b = 0;
    std::cin >> b;
    int multipl = 0;//инициализируем аргумент для обозначения произведения цифр числа
    multipl = TheMultiplication(a);// присваиваем ему значение
    if (multipl>b){// сравниваем результат с параметром b
        std::cout << "Multiplication of its digits is greater than the number b" << std::endl;
    }
    else {std::cout << "Multiplication of its digits is NOT greater than the number b" << std::endl;}
//19.2
    int sum = TheSum(a);// ищем сумму цифр числа
    if (sum%7==0){//смотрим кратна ли она 7
        std::cout << "The sum is a multiple of 7" << std::endl;
    } else {std::cout << "The sum is NOT a multiple of 7" << std::endl;}
    return 0;
}
