//Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
//сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
//прямоугольника были параллельны сторонам другого.
#include <iostream>

void Test(double a){
    if (a<=0){//делаем проверку введенного числа
        std::cout << "number should be more than 0" << std::endl;
        exit(0);
    }
}

int main() {
    std::cout << "Enter the parameter a" << std::endl; //просим пользователя ввести первый параметр
    double a = 0.0;
    std::cin >> a;
    Test(a);
    std::cout << "Enter the parameter b" << std::endl; //просим пользователя ввести 2 параметр
    double b = 0.0;
    std::cin >> b;
    Test(b);
    std::cout << "Enter the parameter c" << std::endl; //просим пользователя ввести 3 параметр
    double c = 0.0;
    std::cin >> c;
    Test(c);
    std::cout << "Enter the parameter d" << std::endl; //просим пользователя ввести 4 параметр
    double d = 0.0;
    std::cin >> d;
    Test(d);
    if (c>=a && d>=b || d>=a && c>=b){
        std::cout << "the rectangle will fit into another rectangle" << std::endl; //проверяем поместится один прямоугольник в другой
    } else {
        std::cout << "the rectangle will not fit into another rectangle" << std::endl;
    }
    return 0;
}
