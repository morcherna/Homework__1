// Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.
#include <iostream>

int main() {
    std::cout << "Enter the month" << std::endl; //просим пользователя ввести месяц
    int month = 0;
    std::cin >> month;
    if (month<=0 || month >= 13){//обозначаем ограничения на вводимое число
        std::cout << "month can be a number from 1 to 12" << std::endl;
//далее в зависимости от вводимого числа выводим месяц и время года
    } else if (month==1){
        std::cout << "Month: January \nSeason: winter "<< std::endl;
    } else if (month==2){
        std::cout << "Month: February \nSeason: winter "<< std::endl;
    } else if (month==3){
        std::cout << "Month: March \nSeason: spring "<< std::endl;
    } else if (month==4){
        std::cout << "Month: April \nSeason: spring "<< std::endl;
    } else if (month==5){
        std::cout << "Month: May \nSeason: spring " << std::endl;
    } else if (month==6){
        std::cout << "Month: June \nSeason: summer " << std::endl;
    } else if (month==7){
        std::cout << "Month: July \nSeason: summer "<< std::endl;
    } else if (month==8){
        std::cout << "Month: Avgust \nSeason: summer "<< std::endl;
    } else if (month==9){
        std::cout << "Month: September \nSeason: autumn "<< std::endl;
    } else if (month==10){
        std::cout << "Month: October \nSeason: autumn "<< std::endl;
    } else if (month==11){
        std::cout << "Month: November \nSeason: autumn "<< std::endl;
    } else if (month==12) {
        std::cout << "Month: December \nSeason: winter " << std::endl;
    }
    return 0;
}
