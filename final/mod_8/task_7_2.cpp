#include <iostream>
using namespace std;

int main() {
    int americano = 0;
    int latte = 0;
    int water;
    int milk;
    int drink;

    cout << "=====Кофемашина=====\n";
    cout << "Введите количество воды в мл: "; cin >> water;
    cout << "Введите количество молока в мл: "; cin >> milk;

    while (water >= 300 || (water >= 30 && milk >= 270)) { 
        cout << "Выберите напиток (1 — американо, 2 — латте): "; cin >> drink;
        
        if (drink == 1) {
            if (water >= 300) {
                water -= 300;
                americano += 1;
                cout << "Ваш напиток готов.\n";
            } else {
                cout << "Недостаточно воды для американо!\n";
            }
        } else if (drink == 2) {
            if (water >= 30 && milk >= 270) {
                water -= 30;
                milk -= 270;
                latte += 1;
                cout << "Ваш напиток готов.\n";
            } else {
                cout << "Недостаточно ингредиентов для латте!\n";
            }
        } else {
            cout << "Введите '1' или '2'.\n";
        }
    }

    cout << "Отчёт:\n";
    cout << "Ингредиентов осталось:\n";
    cout << "\tВода: " << water << "мл.\n";
    cout << "\tМолоко: " << milk << "мл.\n";
    cout << "Кружек американо приготовлено: " << americano << "\n";
    cout << "Кружек латте приготовлено: " << latte << "\n";
}
