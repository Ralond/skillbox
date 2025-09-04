#include <iostream>

using namespace std;
int main() {
    int i=0;
    int countNum;
    int num=0;

    cout << "--------Сумма чисел--------\n"; 
    cout << "Сколько чисел нужно сложить? "; cin >> countNum;

    while (i != countNum){
        int a;
        cout << "Введите " << (i+1) << " число.\n";
        cin >> a;
        num +=a;
        i++;
    }
    cout << "Сумма чисел равна: " << num << "\n";
}