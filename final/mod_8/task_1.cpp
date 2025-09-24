#include <iostream>
#include <cmath>

int main (){
    using namespace std;
    cout << "======Космический симулятор======\n";
    
    float mass, force, time, power;
    do {
        cout << "Введите массу космического корабля: "; cin >> mass;
        if (mass <= 0) cout << "Ошибка! Масса должна быть больше нуля!\n";
    } while (mass <= 0);

    do {
        cout << "Введите силу тяги F: "; cin >> force;
        if (force < 0) cout << "Ошибка! Сила должна быть больше нуля!\n";
    } while (force < 0);

    do {
        cout << "Введите количество секунд: "; cin >> time;
        if (time < 0) cout << "Ошибка! Продолжительность должна быть больше нуля!\n";
    } while (time < 0);

    power = force / mass;
    
    float distance = (power * pow(time, 2)) / 2;

    cout << "Космический корабль окажется на расстоянии " << distance << " от первоначального положения.\n";
}