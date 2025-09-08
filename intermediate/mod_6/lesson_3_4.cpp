#include <iostream>

using namespace std;
int main() {
    int number;

    cout << "------Военное время------\n";
    cout << "Введите число: "; cin >> number;

    while (number != 0){
        if (number < 0){
            cout << "-";
            number *= -1;
        }
        cout << (number % 10);
        number /= 10;
    }
}