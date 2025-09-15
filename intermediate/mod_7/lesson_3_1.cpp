#include <iostream>
#include <string>

using namespace std;
int main() {
    string pass;
    int n;
    cout << "=====Пароль (цикл for)=====\n";

    for (; pass != "0000";){
        cout << "Введите пароль: \n"; cin >> pass;
        if (pass == "0000") {
            cout << "Пароль верный!\n";
        } else cout << "Пароль неверный! Попробуйте ещё раз\n";
    }
}