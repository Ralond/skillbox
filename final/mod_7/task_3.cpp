#include <iostream>
#include <string>

using namespace std;
int main() {
    string direction;
    int x = 7, y = 10;

    cout << "=====Красный Марс=====\n";
    cout << "В какую сторону направить робота? Север (w), юг (s), запад (a) или восток (d):\n"; 
    for (;;){
        cout << "[Оператор]: ";
        cin >> direction;
        if (direction == "w") {
            if (x < 15 && x >= 0) x += 1;
        } else if (direction == "s") {
            if (x <= 15 && x > 0) x -= 1;
        } else if (direction == "d") {
            if (y < 20 && y >= 0) y += 1;
        } else if (direction == "a") {
            if (y <= 20 && y > 0) y -= 1;
        } else cout << "Введите направление маленькими буквами.\n";

        cout << "[Программа]: Марсоход находится на позиции " << x << "," << y << ", введите команду:\n";
    }
}