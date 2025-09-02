#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    int result;

    cout << "-----Проверка чисел на совпадение-----\n";

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    if (a == b && a == c){
        result = 3;
    } else if (a == b || a == c || b == c) {
        result = 2;
    } else result = 0;

    cout << result << " совпадающих числа!";
} 
