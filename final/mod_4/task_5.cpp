#include <iostream>
using namespace std;
int main() {
    int first;
    int second;
    
    cout << "Введите первое число: ";
    cin >> first;
    cout << "Введите второе число: ";
    cin >> second;
    cout << "-----Проверяем-----\n";

    if (first%second==0){
        cout << "Да, " << first << " делится на " << second << " без остатка!";
    } else {
        cout << "Нет, " << first << " не делится на " << second << " без остатка!";
    }
}