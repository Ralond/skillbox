#include <iostream>
using namespace std;
int main() {
    int speed, altitude;
    cout << "������� 1. ���� ����������!";
    cout << "������� �������� �������: "; cin >> speed;
    cout << "������� ������: "; cin >> altitude;
    
    if (speed >= 750 && speed <= 850) {
        if (altitude >= 9000 && altitude <= 9500) {
            cout << "����� ����������\n";
        } else {
            cout << "���������� �� �������\n";
        }
    } else {
        cout << "���������� �� �������\n";
    }

}