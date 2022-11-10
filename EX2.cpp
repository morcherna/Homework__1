//Вычислить длину окружности и площадь круга радиуса г
#include <iostream>

void Сircumference(int r){
    double C = 2*r*3.14;
    std::cout << "The Circumference: " << C << std::endl; //выводим рузультат
}
void AreaOfTheCircle(int r){
    double S = 3.14*r*r;
    std::cout << "The Area of the circle: " << S << std::endl; //выводим рузультат
}

int main() {
    std::cout << "Enter the radius of the circle" << std::endl; //просим пользователя ввести данные
    int r=0;
    std::cin >> r;
    Сircumference(r);
    AreaOfTheCircle(r);
    return 0;
}