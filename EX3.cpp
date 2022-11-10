//Вычислить площадь прямоугольного треугольника и гипотенузу
#include <iostream>
#include "math.h"

void TheAreaOfRightTriangle(int a, int b){
    int S = a*b/2;
    std::cout << "The Area Of Right Triangle: " << S << std::endl; //выводим рузультат
}
void theHypotenuse(int a, int b){
    double H = sqrt(a*a+b*b);
    std::cout << "the Hypotenuse: " << H << std::endl; //выводим рузультат
}

int main() {
    std::cout << "Enter one right triangle catheter" << std::endl; //просим пользователя ввести данные
    int a=0;
    std::cin >> a;
    std::cout << "Enter second right triangle catheter" << std::endl; //просим пользователя ввести данные
    int b=0;
    std::cin >> b;
    TheAreaOfRightTriangle(a, b);
    theHypotenuse(a,b);
    return 0;
}