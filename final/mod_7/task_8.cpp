#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "=====Ёлочка=====\n";
    cout << "Введите высоту ёлочки: "; cin >> height;

    if (height <= 0) {
        cout << "Введите высоту больше нуля: "; cin >> height;
    }

    for (int row = 0; row < height; row++) {
        int spaces = height - row - 1;
        int grid  = 2 * row + 1;

        // Выводим цикл с пробелами
        for (int i = 0; i < spaces; i++) cout << " ";
        // Выводим цикл с решеткой
        for (int i = 0; i < grid; i++) cout << "#";

        // Переводим строку
        cout << "\n";
    }
}