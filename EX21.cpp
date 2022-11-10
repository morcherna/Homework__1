// Написать программу, в которой выводятся размеры основных типов данных. Сделать
//выводы
#include <iostream>
int main(){
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
    //// минимальным размером  в 1 байт обладают такие типы, как bool, char, wchar_t. А самым большим в 8 байт: long long, double, long double
}