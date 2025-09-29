#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    cout << "======Космический симулятор======\n";
    
    float mass, force, time, power;
    do {
        cout << "Введите массу объекта (кг): "; cin >> mass;
        if (mass <= 0) cout << "Ошибка! Масса должна быть больше нуля!\n";
    } while (mass <= 0);

    do {
        cout << "Введите силу F (Н): "; cin >> force;
        if (force < 0) cout << "Ошибка! Сила не может быть отрицательной!\n";
    } while (force < 0);

    do {
        cout << "Введите время движения: "; cin >> time;
        if (time < 0) cout << "Ошибка! Время не может быть отрицательным!\n";
    } while (time < 0);

    power = force / mass;
    
    float distance = (power * pow(time, 2)) / 2;

    cout << "Пройденное расстояние составляет " << distance << " метров при равномерном ускорении.\n";
    
}