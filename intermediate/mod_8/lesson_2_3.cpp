#include <iostream>

using namespace std;
int main(){
    float price, discount;
    float weight;

    cout << "======���������� ����������======\n";
    
    cout << "������� ���� �� 100 �����: "; cin >> price;
    cout << "������� ����� �������? "; cin >> weight;
    cout << "������� ��������� ������? "; cin >> discount;

    price /= 100;
    price *= weight;
    price -= price * (discount / 100);

    cout << "��������� ��������: " <<price << "\n";

}