//Найти корни квадратного уравнения
#include <iostream>
#include "cmath"

void RootsOfTheEquation(int a, int b, int c){
    int discr= b*b-4*a*c;//находим дискриминант
    std::cout << "The Discriminant: " << discr << std::endl; //выводим результат
    if (discr<0){
        std::cout << "there are no roots" << std::endl;
        abort();
    }// если, дискриминант меньше 0, тогда выводим, что корней нет
    if (discr>0) {
        double x1 = (-b + sqrt(discr)) / (2 * a);//если дискр. больше 0, то ищем оба корня
        double x2 = (-b - sqrt(discr)) / (2 * a);
        std::cout << "First root x: " << x1 << std::endl; //выводим рузультат
        std::cout << "Second root x: " << x2 << std::endl; //выводим рузультат
    }
    if (discr == 0){
        double x = (-b + sqrt(discr)) / (2 * a);// при дискр. равном нулю ищем только 1 корень
        std::cout << "root x: " << x << std::endl; //выводим рузультат
    }
}

int main() {
    std::cout << "Enter the parameter a" << std::endl; //просим пользователя ввести первый параметр
    int a=0;
    std::cin >> a;
    if (a == 0){
        std::cout << "This parameter cannot be equil 0" << std::endl;//вводим ограничения на 1 параметр
        abort();
    }
    std::cout << "Enter the parameter b" << std::endl; //просим пользователя ввести 2 параметр
    int b=0;
    std::cin >> b;
    std::cout << "Enter the parameter c" << std::endl; //просим пользователя ввести 3 параметр
    int c=0;
    std::cin >> c;
    RootsOfTheEquation(a,b,c);//считаем корни
    return 0;
}