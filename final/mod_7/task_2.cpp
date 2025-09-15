#include <iostream>
using namespace std;

int main() {
    int ameriсano = 0; //подсчет чашек американо
    int latte = 0; //подсчет чащек латте
    int water;
    int milk;
    int drink;
    bool forAmericano = true;
    bool forLatte = true;

    cout << "=====Кофемашина=====\n";
    cout << "Введите количество воды в мл: "; cin >> water ;
    cout << "Введите количество молока в мл: "; cin >> milk;

    for (bool lack = false; !lack;) {
        cout << "Выберите напиток (1 — американо, 2 — латте): "; cin >> drink;

// В условиях написано: "Программа не выводит отчёт, если количества ингредиентов хватает хотя бы на один из напитков."
// и "Если ингредиентов не хватает для приготовления любого из напитков, программа должна вывести отчёт."
// Сделал, чтобы выводило отдельно по каждому ингридиенту и общий отчет, если больше никакой напиток сделать нельзя.

        if (drink == 1){
            if (water >= 300) {
                water -= 300;
                ameriсano += 1;
                cout << "Ваш напиток готов.\n";
                if (water < 300) {
                    forAmericano = false;
                    cout << "Закончилась вода для американо\n";
                }
            } else if (water < 300){
                cout << "Недостаточно воды\n";
                forAmericano = false;
            }
        } else if (drink == 2){
            if (water >= 30 && milk >= 280) {
                water -= 30;
                milk -= 280;
                latte += 1;
                cout << "Ваш напиток готов.\n";
                if (water < 30 || milk < 280) {
                    forLatte = false; 
                    cout << "Закончились ингридиенты для латте\n";
                }
            } else if (water < 30 || milk < 280) {
                if (water < 30) cout << "Недостаточно воды\n";
                if (milk < 280) cout << "Недостаточно молока\n";
                forLatte = false;
                }
        } else cout << "Введите '1' или '2'.\n";
        if (!forAmericano && !forLatte) lack = true;
    }
    cout << "***Отчёт***\n";
    cout << "Ингредиентов осталось:\n";
    cout << "\tВода: " << water << "мл.\n";
    cout << "\tМолоко: " << milk << "мл.\n";
    cout << "Кружек американо приготовлено: " << ameriсano << "\n";
    cout << "Кружек латте приготовлено: " << latte << "\n";
    
}