#include <iostream>

int main() {

    int num;

    std::cout << "---------вычисление корня---------\n";
    std::cout << "Введите число: ";
    std::cin >> num;
    num = num*num;
    std::cout << "Корень числа = " << num << "\n";
}