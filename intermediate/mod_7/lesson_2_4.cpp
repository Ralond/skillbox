#include <iostream>

using namespace std;
int main() {
    int number;
    int sum=0;

    cout << "=====����� ��������=====\n";
    cout << "�� ������ ����� ��������� �������� �����? "; cin >> number;
    cout << "-------------------------\n";

    for (int i = 1; i <= number; i++){
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << "�����: " << sum << "\n";
}