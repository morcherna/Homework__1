//Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого
//являются медианы исходного треугольника
#include <iostream>
#include "cmath"

int MedianToTheSelectedSide(int a, int b, int c){
    int median = sqrt(2*a*a+2*b*b-c*c)/2;
    return median;
}


int main() {
    std::cout << "Enter the parameter a" << std::endl; //просим пользователя ввести первый параметр
    int a=0;
    std::cin >> a;
    std::cout << "Enter the parameter b" << std::endl; //просим пользователя ввести 2 параметр
    int b=0;
    std::cin >> b;
    std::cout << "Enter the parameter c" << std::endl; //просим пользователя ввести 3 параметр
    int c=0;
    std::cin >> c;
    int medianToC = MedianToTheSelectedSide(a,b,c);//считаем изначальную медиану к с
    int medianToB = MedianToTheSelectedSide(a,c,b); //считаем изначальную медиану к b
    int medianToA = MedianToTheSelectedSide(b,c,a); //считаем изначальную медиану к a
    int result_median_to_c = MedianToTheSelectedSide(medianToA,medianToB,medianToC); //считаем конечную медиану к с
    int result_median_to_b = MedianToTheSelectedSide(medianToA, medianToC,medianToB); //считаем конечную медиану к b
    int result_median_to_a = MedianToTheSelectedSide(medianToB, medianToC,medianToA); //считаем конечную медиану к a
    std::cout << "The final median to A: " << result_median_to_a << std::endl;
    std::cout << "The final median to B: " << result_median_to_b << std::endl;
    std::cout << "The final median to C: " << result_median_to_c << std::endl;
    return 0;
}