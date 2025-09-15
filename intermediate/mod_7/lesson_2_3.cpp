#include <iostream>

using namespace std;
int main() {
    int number;

    cout << "=====Таблица умножения.=====\n";
    cout << "Для какого числа нужна таблица умножения? "; cin >> number;
    cout << "-------------------------\n";

    for (int i = 1; i <= 10; i++){
            cout << "|       " << number << " * " << i << " = " << number*i <<"\n";
    }
    cout << "-------------------------\n";
}