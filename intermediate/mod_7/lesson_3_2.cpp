#include <iostream>
using namespace std;

int main() {
    int result=0;
    int square;
    int i = 0;

    cout << "------Кадастровые проблемы------\n";
    cout << "Введите площадь участка: "; cin >> square;

    for (; i * i < square; i++){
        if (square < 0 ) {
            cout << "Площадь участка не квадратная!\n";
            break;
        }  
    }

    if (i * i == square && square <= 1000000) {
        cout << "Участок квадратный!";
    } else if (i * i != square && square <= 1000000) {
        cout << "Площадь участка не квадратная!";
    } else cout << "Максимальная площадь участка - 1000000 м2!\n";
}