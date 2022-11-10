//Определить, является ли треугольник со сторонами a, b, c равнобедренным
#include <iostream>

int main() {
    std::cout << "Enter the parameter a" << std::endl; //просим пользователя ввести первый параметр
    int a = 0;
    std::cin >> a;
    std::cout << "Enter the parameter b" << std::endl; //просим пользователя ввести 2 параметр
    int b = 0;
    std::cin >> b;
    std::cout << "Enter the parameter c" << std::endl; //просим пользователя ввести 3 параметр
    int c = 0;
    std::cin >> c;
    if (a==b){std::cout << "the triangle is isosceles" << std::endl;}//если любые 2 стороны треугольника равны, тогда он равнобедренный
    else if (a==c){std::cout << "the triangle is isosceles" << std::endl;}//если любые 2 стороны треугольника равны, тогда он равнобедренный
    else if (c==b){std::cout << "the triangle is isosceles" << std::endl;}//если любые 2 стороны треугольника равны, тогда он равнобедренный
    else {std::cout << "the triangle is not isosceles" << std::endl;}// если ни одна сторона не равна любой другой, тогда он не равнобедренный
    return 0;
}