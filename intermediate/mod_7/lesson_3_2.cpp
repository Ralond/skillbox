#include <iostream>
using namespace std;

int main() {
    int result=0;
    int square;
    int i = 0;

    cout << "------����������� ��������------\n";
    cout << "������� ������� �������: "; cin >> square;

    for (; i * i < square; i++){
        if (square < 0 ) {
            cout << "������� ������� �� ����������!\n";
            break;
        }  
    }

    if (i * i == square && square <= 1000000) {
        cout << "������� ����������!";
    } else if (i * i != square && square <= 1000000) {
        cout << "������� ������� �� ����������!";
    } else cout << "������������ ������� ������� - 1000000 �2!\n";
}