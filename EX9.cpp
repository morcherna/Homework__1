// Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.
#include <iostream>

void hours_and_minutes(int x){
    int hours = x/3600; //считаем часы
    int minutes = (x - hours*3600)/60; //считаем минуты
    int seconds = x - hours*3600- minutes*60; //считаем оставшиеся секунды
    std::cout << "Hours: " << hours << std::endl; // выводим результат
    std::cout << "Minutes: " << minutes << std::endl;// выводим результат
    std::cout << "Seconds: " << seconds << std::endl;// выводим результат
}
int main() {
    std::cout << "Enter the time(second):" << std::endl; //просим пользователя ввести данные
    int x=0;
    std::cin >> x;
    hours_and_minutes(x);
    return 0;
}