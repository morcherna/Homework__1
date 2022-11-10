//Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма
//покупки превышает 1000 рублей.
#include <iostream>

int main() {
    std::cout << "Enter the purchase price a" << std::endl; //просим пользователя ввести первый параметр
    double a = 0.0;
    std::cin >> a;
    if (a<1000.0) {std::cout << "Purchase price: " << a << std::endl;}// если введеная сумма меньше 1000, то выводим это же число
    else {
        a = a * 0.9;// если данная сумма больше 1000, тогда выводим итог с учеом скидки
        std::cout << "Purchase price: " << a << std::endl;
    }
    return 0;
}
