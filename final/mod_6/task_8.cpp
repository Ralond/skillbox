#include <iostream>
using namespace std;

int main() {
    int maxNumber = 63;
    int minNumber = -1;
    int i = 0;
    int number = 0;
    string ansver;


    cout << "=====������ �����=====\n";
    cout << "��������� ����� �� 1 �� 63\n";
    
    while (i < 6){
        if (number == (maxNumber+minNumber)/2+1) {
            number = (maxNumber+minNumber)/2;
        } else number = (maxNumber+minNumber)/2+1;
        cout << "���� ����� ������ " << number << "? �������� '��' ��� '���': "; cin >> ansver;
        if (ansver == "���") {
            maxNumber = number;
        } else if (ansver == "��") {
            minNumber = number;
        } else {cout << "�������� '��' ��� '���': "; cin >> ansver; i--;}
        i++;
    }
    cout << "���� �����: " << number;
}