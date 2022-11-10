// Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
#include <iostream>
void CalculateTheArea(int a, int b, int h){
    int S = (a+b)*h/2;
    std::cout << "The Area of the trapezoid: " << S << std::endl; //выводим рузультат
}


int main() {
    std::cout << "Enter the first base of the trapezoid" << std::endl; //просим пользователя ввести данные
    int a=0;
    std::cin >> a;
    std::cout << "Enter the second base of the trapezoid" << std::endl; //просим пользователя ввести данные
    int b=0;
    std::cin >> b;
    std::cout << "Enter the height of the trapezoid" << std::endl; //просим пользователя ввести данные
    int h=0;
    std::cin >> h;
    CalculateTheArea(a, b, h); // вызываем функцию, которая считает площадь
    return 0;
}