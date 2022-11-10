//Выполнить переход от полярных координат к декартовым.
#include <iostream>
#include "cmath"

void TransitionFromPolarToCartesian(double p, double q){
    double x = p*cos(q); // нашли координату x
    double y = p*sin(q); // нашли координату y
    std::cout << "The coordinate x: " << x << std::endl; //выводим рузультат
    std::cout << "The coordinate y: " << y << std::endl; //выводим рузультат
}


int main() {
    std::cout << "Enter the polar radius" << std::endl; //просим пользователя ввести данные
    int p = 0;
    std::cin >> p;
    std::cout << "Enter the polar angle" << std::endl; //просим пользователя ввести данные
    int q = 0;
    std::cin >> q;
    TransitionFromPolarToCartesian(p, q);
    return 0;
}