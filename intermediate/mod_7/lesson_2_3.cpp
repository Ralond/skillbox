#include <iostream>

using namespace std;
int main() {
    int number;

    cout << "=====������� ���������.=====\n";
    cout << "��� ������ ����� ����� ������� ���������? "; cin >> number;
    cout << "-------------------------\n";

    for (int i = 1; i <= 10; i++){
            cout << "|       " << number << " * " << i << " = " << number*i <<"\n";
    }
    cout << "-------------------------\n";
}