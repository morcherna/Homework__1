//Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой (рост - 100 = идеальный вес).
#include <iostream>

int main() {
    std::cout << "The main thing is to be comfortable! Accept your body as it is! ;)" << std::endl;
    std::cout << "Enter the height" << std::endl; //просим пользователя ввести первый параметр
    int h = 0;
    std::cin >> h;
    std::cout << "Enter the weight" << std::endl; //просим пользователя ввести первый параметр
    int w = 0;
    std::cin >> w;
    if (h-100>w) {//если идеальный вес больше текущего веса, тогда выводим рекомендацию к набору массы
        std::cout << "recommendation to gain weight" << std::endl;
        std::cout << "perfect weight" << h-100 << std::endl;// выводим идельный вес
    }
    else if (h-100<w) {//если идеальный вес меньше текущего, тогда выводим рекомендацию к похудению
        std::cout << "recommendation to lose weight" << std::endl;
        std::cout << "perfect weight" << h-100 << std::endl;//выводим идеальный вес
    }
    else if (h-100==w) {// если данный вес равен идеальному, тогда выводим рекомендацию сохранять вес
        std::cout << "recommendation to stay at this weight" << std::endl;
    }
    return 0;
}
