#include <iostream>

using namespace std;
int main(){
    float price;
    float weight;

    cout << "======�����======\n";
    
    cout << "������� ���� �� 100 �����: "; cin >> price;
    cout << "������� ����� �������? "; cin >> weight;

    price /= 100;
    price *= weight;

    cout << "��������� ��������: " <<price << "\n";

}