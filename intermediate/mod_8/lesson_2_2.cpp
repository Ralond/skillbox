#include <iostream>

using namespace std;
int main(){
    float protein, carb;
    float weight;

    cout << "======���======\n";
    
    cout << "������� ���������� ������ �� 100 �����: "; cin >> protein;
    cout << "������� ���������� ��������� �� 100 �����: "; cin >> carb;
    cout << "������� ����� �������? "; cin >> weight;

    protein /= 100;
    protein *= weight;

    carb /= 100;
    carb *= weight;

    cout << "�����: " <<protein << "\n";
    cout << "���������: " <<carb << "\n";

}