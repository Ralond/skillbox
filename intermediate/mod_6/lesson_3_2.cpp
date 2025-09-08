#include <iostream>

using namespace std;
int main() {
    int i=0;
    int result=0;
    int square;

    cout << "------Кадастровые проблемы------\n";
    cout << "Введите площадь участка: "; cin >> square;

    while (i * i < square){
        if (square < 0 ) {
            cout << "Площадь участка не квадратная!\n";
            break;
        }
        i++;            
    }

    if (i * i == square) {
        cout << "Участок квадратный!";
    } else cout << "Площадь участка не квадратная!";
}