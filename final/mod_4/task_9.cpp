#include <iostream>
using namespace std;
int main(){
    int profit;
    int firstMark = 10000;
    int twoMark = 50000;
    int tax;

    cout << "----------Расчет прогрессивного налога----------\n";
    cout << "Введите ваш доход: ";
    cin >> profit;
    // Обработка некоректного ввода:
    if (profit <= 0) {
        cout << "Введите положительное число: ";
        cin >> profit;
    }
    cout << "-----Считаем-----\n";

    if (profit <= firstMark) {
        tax = profit * 0.13;
    } else if (profit >= firstMark && profit <= twoMark) {
        tax = firstMark * 0.13 + (profit - firstMark) * 0.2;
    } else {
        tax = firstMark * 0.13 + (twoMark - firstMark) * 0.2 + (profit - twoMark) * 0.3;
    }
    cout << "Сумма налога на ваш доход: " << tax;
    
}