#include <iostream>

int main() {
    int beginHeight;
    int nightFade;
    int dailyGrowth;
    int result;

    std::cout << "Введите высоту бамбука при посадке в землю (в сантиметрах): ";
    std::cin >> beginHeight;

    std::cout << "На сколько см. бамбук вырастает днём? ";
    std::cin >> dailyGrowth;

    std::cout << "Сколько см. бамбука съедают гусеницы? ";
    std::cin >> nightFade;

    result = beginHeight + (dailyGrowth-nightFade)*2 + dailyGrowth/2;

    
    std::cout << "На третий день от бамбука останется " << result << " сантиметров.";
}
