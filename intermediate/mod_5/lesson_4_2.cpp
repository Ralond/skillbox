#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    int x;
    int y;

    cout << "Введите размеры кирпича.\n";
    cout << "Ширина: ";
    cin >> a;
    cout << "Высота: ";
    cin >> b;
    cout << "Длина: ";
    cin >> c;
    
    cout << "Введите размеры отверстия.\n";
    cout << "Размер 1: ";
    cin >> x;
    cout << "Размер 2 ";
    cin >> y;

    cout << "-------------Проводим вычисления-------------\n";
    if (a <= x && b <= y || b <= x && a <= y || b <= x && c <= y || c <= x && b <= y || c <= x && a <= y || a <= x && c <= y){
        cout << "Пройдет";
    } else cout << "Не пройдёт";
}