#include <iostream>

using namespace std;
int main() {
    int countNum;
    int num=0;

    cout << "=====Сумма чисел (цикл for)=====\n";
    cout << "Сколько чисел нужно сложить? "; cin >> countNum;

    for (int i = 0; i != countNum; i++){
        int a;
        cout << "Введите " << (i+1) << " число.\n";
        cin >> a;
        num +=a;
    }
    cout << "Сумма чисел равна: " << num << "\n";
}