#include <iostream>

using namespace std;
int main() {
    int number;
    int a;

    cout << "------������� �����------\n";
    cout << "������� ����� (���������� 10 �������): "; cin >> number;
    while (number > 9){
        a = number % 10;
        if (a > 1) {
            cout << "����� �� � �������� �������.";
            break;
        }
        number /= 10;
    }
    if (number < 2) cout << "����� � �������� �������!";
}