//Выполнить переход от декартовых координат к полярным.
#include <iostream>
#include "cmath"

void TransitionFromCartesianToPolar(double x, double y){
    double p = sqrt(x*x+y*y); // нашли полярный радиус
    double q = atan(y/x); // нашли полярный угол
    std::cout << "The polar radius: " << p << std::endl; //выводим рузультат
    std::cout << "The polar angle: " << q << std::endl; //выводим рузультат
}


int main() {
    std::cout << "Enter the coordinate x" << std::endl; //просим пользователя ввести данные
    int x = 0;
    std::cin >> x;
    std::cout << "Enter the coordinate y" << std::endl; //просим пользователя ввести данные
    int y = 0;
    std::cin >> y;
    TransitionFromCartesianToPolar(x, y);
    return 0;
}