#include <iostream>
#include <cmath>

int main (){
    using namespace std;
    cout << "======����������� ���������======\n";
    
    float mass, force, time, power;
    do {
        cout << "������� ����� ������������ �������: "; cin >> mass;
        if (mass <= 0) cout << "������! ����� ������ ���� ������ ����!\n";
    } while (mass <= 0);

    do {
        cout << "������� ���� ���� F: "; cin >> force;
        if (force < 0) cout << "������! ���� ������ ���� ������ ����!\n";
    } while (force < 0);

    do {
        cout << "������� ���������� ������: "; cin >> time;
        if (time < 0) cout << "������! ����������������� ������ ���� ������ ����!\n";
    } while (time < 0);

    power = force / mass;
    
    float distance = (power * pow(time, 2)) / 2;

    cout << "����������� ������� �������� �� ���������� " << distance << " �� ��������������� ���������.\n";
}