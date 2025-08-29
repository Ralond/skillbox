#include <iostream>
int main(){
    std::string userName;
    std::string race;

    std::cout << "Введите имя персонажа: ";
    std::cin >> userName;

    std::cout << "Введите расу персонажа: ";
    std::cin >> race;

    std::cout << "Родился новый " << race << ", его зовут " << userName << ". Добро пожаловать в этот суровый мир!";
}