//Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
//предоставляется скидка 20%. Ввести продолжительность разговора и день недели(число от 1 до
//7).
// стоимость переговоров 10р/мин
#include <iostream>

int main() {
    std::cout << "Enter the duration of the conversation" << std::endl; //просим пользователя ввести длительность переговоров
    int d = 0;
    std::cin >> d;
    if (d<0){
        std::cout << "duration should be more than 0" << std::endl;
        abort();
    }// ставим огранечения, чтобы число было положтельным
    std::cout << "Enter the day of the week in the form from 1 to 7" << std::endl; //просим пользователя ввести день недели в виде от 1до 7
    int w = 0;
    std::cin >> w;
    if (w>=8 || w<=0){//если вводимое число дня недели больше или меньше заданного интервала от1 до 7, выодим ошибку пользователю
        std::cout << "Enter the day of the week in the form from 1 to 7" << std::endl;
        abort();
    }
    else if (w>=1 && w<=5){// если с п 1 по 5, тогда просто считем цену без скидки
        int cost = 10 * d;
        std::cout << "the cost of the conversation: " << cost << std::endl;
    } else if (w==6 || w==7) {// если это суббота или воскресенье, тогда учитываем скидку
        double cost = 10 * d * 0.8;
        std::cout << "the cost of the conversation: " << cost << std::endl;
    }
    return 0;
}
