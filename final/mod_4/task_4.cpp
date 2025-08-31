#include <iostream>
using namespace std;
int main() {
    int experience;
    
    cout << "-----Вычислим уровень-----\n";
    cout << "Введите число очков опыта: ";
    cin >> experience;
    cout << "-----Считаем-----\n";

    if (experience >= 1000 & experience < 2500){
        cout << "У вас 2 уровень!";
    } else if (experience >= 2500 & experience < 5000){
        cout << "У вас 3 уровень!";
    } else if (experience >= 5000){
        cout << "У вас 4 - максимальный уровень!";
    } else {
        cout << "У вас 1 уровень!";
    }
}
