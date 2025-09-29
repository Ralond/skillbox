#include <iostream>

int main(){
    using namespace std;
    float health = 1, resist = 0, fireball = 0, damage;
    cout << "=====Immolate Improved!=====";

    while (health > 0) {
        do {
            cout << "Введите показатель резиста (от 0 до 1): "; cin >> resist;
            if (resist >= 1 || resist <= 0) cout << "Введите число больше 0 и меньше 1!\n";
        } while (resist >= 1 || resist <= 0);
        
        do {
            cout << "Введите урон огненного шара (от 0 до 1): "; cin >> fireball;
            if (fireball >= 1 || fireball <= 0) cout << "Введите число больше 0 и меньше 1!\n";
        } while (fireball >= 1 || fireball <= 0);

        damage = fireball * resist;
        health -= damage;

        if (health <= 0) {
            cout << "Нанесено " << damage << " урона! Вы победили орка!\n";
        } else cout << "Нанесено " << damage << " урона! У орка осталось " << health << " здоровья.\n";
    }
}