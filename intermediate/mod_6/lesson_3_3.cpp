#include <iostream>

using namespace std;
int main() {
    int number;
    int a;

    cout << "------Кожаный мешок------\n";
    cout << "Введите число (ограничено 10 цифрами): "; cin >> number;
    while (number > 9){
        a = number % 10;
        if (a > 1) {
            cout << "Число не в двоичной системе.";
            break;
        }
        number /= 10;
    }
    if (number < 2) cout << "Число в двоичной системе!";
}