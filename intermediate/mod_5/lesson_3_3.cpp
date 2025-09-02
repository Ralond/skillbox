#include <iostream>
using namespace std;
int main (){
    int firstStick;
    int twoStick;
    int threeStick;

    cout << "-----Проверка на треугольник-----\n";

    cout << "Введите длину первой палочки: ";
    cin >> firstStick;
    cout << "Введите длину второй палочки: ";
    cin >> twoStick;
    cout << "Введите длину третьей палочки: ";
    cin >> threeStick;

    if (firstStick >= (twoStick+threeStick) || twoStick >= (firstStick+threeStick) || threeStick >= (firstStick+twoStick)){
        cout << "Треугольник сложить нельзя\n";
    } else cout << "Треугольник получится!";
} 
