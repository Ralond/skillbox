#include <iostream>
using namespace std;
int main() {
    int speed, altitude;
    cout << "Задание 1. Полёт нормальный!";
    cout << "Введите скорость самолёта: "; cin >> speed;
    cout << "Введите высоту: "; cin >> altitude;
    
    if (speed >= 750 && speed <= 850) {
        if (altitude >= 9000 && altitude <= 9500) {
            cout << "Полет нормальный\n";
        } else {
            cout << "Отклонение от эшелона\n";
        }
    } else {
        cout << "Отклонение от эшелона\n";
    }

}