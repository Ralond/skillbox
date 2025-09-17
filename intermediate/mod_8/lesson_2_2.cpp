#include <iostream>

using namespace std;
int main(){
    float protein, carb;
    float weight;

    cout << "======ЗОЖ======\n";
    
    cout << "Введите количество белков на 100 грамм: "; cin >> protein;
    cout << "Введите количество углеводов на 100 грамм: "; cin >> carb;
    cout << "Сколько весит продукт? "; cin >> weight;

    protein /= 100;
    protein *= weight;

    carb /= 100;
    carb *= weight;

    cout << "Белка: " <<protein << "\n";
    cout << "Углеводов: " <<carb << "\n";

}