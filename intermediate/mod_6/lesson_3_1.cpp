#include <iostream>

using namespace std;
int main() {
    int result=0;
    int number;

    cout << "------�������� 4.0------\n";
    cout << "������� ����� ��� ��������, ������ 42 � �����: "; cin >> number;

    while (number != 0){
        int a;
        a = number % 10;
        result += a;
        number /= 10;
        if (result == 42) {
            cout << "���� ����������";
        } else cout << "���� ������������";
    }

}